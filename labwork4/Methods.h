#include <cmath>
class Task {
      double *alpha; // коэффициенты прогонки
      double *beta;
      double *gamma;
   public:

	  int n;
	  double xL;
	  double xR;
	  double *x;
	  double  h;

	  double kappa1;
	  double kappa2;
	  double mu1;
	  double mu2;

	  double *v; // Численное решение
	  double *u; // Точное решение

	  double *A; // коэфф а в прогонке
	  double *C; // коэфф b
	  double *B; // коэфф с в прогонке
	  double *F;
		

	  void CreateCoeffs();
	  void ThomasAlgoritm(); //метод прогонки
	  ~Task() {
		  delete[] beta; 
		  delete[] alpha; 
		  delete[] A;
		  delete[] B;
		  delete[] C;
		  delete[] F;
		  delete[] u;
		  delete[] v;
		  delete[] x;
	  }
};

class Test1 : public Task {

public:
	inline double k(double x) { return 1.0; }
	inline double q(double x) { return 1.0; }
	inline double U(double x) { return x * x; } // полином 2 степени, взятый в качестве решения
	inline double f(double x) { return x * x - 2; } // функция f

	inline Test1(int _n) {
		xL = 0;
		xR = 1;
		h = (xR - xL) / static_cast<double>(_n);
		n = _n;

		A = new double[n-1];
		C = new double[n-1];
		B = new double[n-1];
		F = new double[n-1];
		
		kappa1 = 0;
		kappa2 = 0;
		mu1 = 0;
		mu2 = 1;

		x = new double[n + 1];
		u = new double[n + 1];
		v = new double[n + 1];
		
		x[0] = xL;
		x[n] = xR;
		for (int i = 1; i < n; i++)
		{
			x[i] = x[i - 1] + h;
			A[i - 1] = q(x[i])/(h*h);
			C[i - 1] = (q(x[i + 1]) + q(x[i]))/(h*h) + k(x[i]);
			B[i - 1] = q(x[i + 1])/(h*h);
			F[i - 1] = f(x[i]);
			u[i] = U(x[i]);
		}
		u[0] = 0;
		u[n] = 1;

	}
};


class Test2 : public Task {

public:
	double ksi;
	inline double k(double x) { 
		if (x <= ksi)
			return ksi + 1;
		else if (x - h >= ksi)
			return ksi * ksi + 1;
		else
			return h / ((ksi - (x - h)) / (ksi + 1) + (x - ksi)/(ksi * ksi + 1));
	}
	inline double q(double x) { 
		if (x + h / 2 <= ksi)
			return ksi * ksi + 1;
		else if (x - h / 2 >= ksi)
			return ksi * ksi + 3;
		else
			return ((ksi - (x - h / 2)) * (ksi * ksi + 1) + (x + h / 2 - ksi) * (ksi * ksi + 3)) / h;
	}
	inline double f(double x) { 
		if (x + h / 2 <= ksi)
			return cos(ksi);
		else if (x - h / 2 >= ksi)
			return sin(ksi);
		else
			return ((ksi - (x - h / 2)) * cos(ksi) + (x + h / 2 - ksi)*sin(ksi)) / h;

	} // функция f

	inline double U(double x) {
		double c1 = -0.71098321896984972845;
		double c2 = 0.73405013123635654004;
		double c3 = -0.040458789996886505846;
		double c4 = 1.0381416753853687229;
		if (x <= ksi)
			return c2*exp(-sqrt((ksi*ksi + 1)/(ksi + 1))*x) +c1*exp(sqrt((ksi * ksi + 1)/ (ksi + 1))*x) + cos(ksi)/(ksi * ksi + 1);
		else 
			return c4*exp(-sqrt((ksi * ksi + 3)/(ksi*ksi + 1))*x) + c3*exp(sqrt((ksi * ksi + 3) / (ksi*ksi + 1))*x) + sin(ksi) / (ksi * ksi + 3);
	} // полином 2 степени, взятый в качестве решения
	
	inline Test2(int _n) {
		xL = 0;
		xR = 1;
		h = (xR - xL) / static_cast<double>(_n);
		n = _n;

		A = new double[n - 1];
		C = new double[n - 1];
		B = new double[n - 1];
		F = new double[n - 1];

		kappa1 = 0;
		kappa2 = 0;
		mu1 = 1;
		mu2 = 0;
		ksi = 0.125;
		x = new double[n + 1];
		u = new double[n + 1];
		v = new double[n + 1];

		x[0] = xL;
		x[n] = xR;
		u[0] = U(xL);
		u[n] = U(xR);
		for (int i = 1; i < n; i++)
			x[i] = x[i - 1] + h;
		for (int i = 1; i < n; i++)
		{
			A[i - 1] = k(x[i]) / (h * h);
			C[i - 1] = (k(x[i + 1]) + k(x[i])) / (h * h) + q(x[i]);
			B[i - 1] = k(x[i + 1]) / (h * h);
			F[i - 1] = f(x[i]);
			u[i] = U(x[i]);
		}
		//u[0] = 0;
		//u[n] = 1;

	}
};

class Test3 : public Task {

public:
	double ksi;
	inline double k(double x) {
		if (x <= ksi)
			return x - h / 2 + 1;
		else if (x - h >= ksi)
			return (x - h / 2) *(x - h / 2) + 1;
		else
			return h / ((ksi - (x - h)) / ((x - h + ksi) / 2 + 1) + (x - ksi) / (((x - h + ksi) / 2) *((x - h + ksi) / 2) + 1));
	}
	inline double q(double x) {
		if (x + h / 2 <= ksi)
			return x * x + 1;
		else if (x - h / 2 >= ksi)
			return x * x + 3;
		else
			return ((ksi - (x - h / 2)) * ((x + h / 2 - ksi)*(x + h / 2 - ksi) + 1) + (x + h / 2 - ksi) * ((x + h / 2 - ksi)*(x + h / 2 - ksi) + 3)) / h;
	}
	inline double f(double x) {
		if (x + h / 2 <= ksi)
			return cos(x);
		else if (x - h / 2 >= ksi)
			return sin(x);
		else
			return ((ksi - (x - h / 2)) * cos((x - h / 2 + ksi) / 2) + (x + h / 2 - ksi)*sin((x - h / 2 + ksi) / 2)) / h;

	} // функция f


	inline Test3(int _n) {
		xL = 0;
		xR = 1;
		h = (xR - xL) / static_cast<double>(_n);
		n = _n;

		A = new double[n - 1];
		C = new double[n - 1];
		B = new double[n - 1];
		F = new double[n - 1];

		kappa1 = 0;
		kappa2 = 0;
		mu1 = 1;
		mu2 = 0;
		ksi = 0.125;
		x = new double[n + 1];
		u = new double[n + 1]; // v2;
		v = new double[n + 1];

		x[0] = xL;
		x[n] = xR;
		for (int i = 1; i < n; i++)
			x[i] = x[i - 1] + h;
		for (int i = 1; i < n; i++)
		{
			A[i - 1] = k(x[i]) / (h * h);
			C[i - 1] = (k(x[i + 1]) + k(x[i])) / (h * h) + q(x[i]);
			B[i - 1] = k(x[i + 1]) / (h * h);
			F[i - 1] = f(x[i]);
		}

	}
};