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

	  double *v; // Численное решение
	  double *u; // Точное решение

	  double *a; // коэфф а в прогонке
	  double *b; // коэфф b
	  double *c; // коэфф с в прогонке
	  double *d;
		

	  void CreateCoeffs();
	  void ThomasAlgoritm(); //метод прогонки
	  ~Task() {
		  delete[] gamma;
		  delete[] beta; 
		  delete[] alpha; 
		  delete[] a;
		  delete[] b;
		  delete[] c;
		  delete[] d;
		  delete[] u;
		  delete[] v;
		  delete[] x;
	  }
};

class Test1 : public Task {

public:
	inline double k(double x) { return -1.0; }
	inline double q(double x) { return -1.0; }
	inline double U(double x) { return x * x; } // полином 2 степени, взятый в качестве решения
	inline double f(double x) { return x * x - 2; } // функция f

	inline Test1(int _n) {
		xL = 0;
		xR = 1;
		h = (xR - xL) / static_cast<double>(_n);
		n = _n;

		a = new double[n + 1];
		b = new double[n + 1];
		c = new double[n + 1];
		d = new double[n + 1];

		x = new double[n + 1];
		u = new double[n + 1];
		v = new double[n + 1];
		
		x[0] = xL;
		
		for (int i = 0; i <= n; i++)
		{
			if (i != 0)
				x[i] = x[i - 1] + h;
			a[i] = k(x[i]);
			b[i] = 2 + h * h;
			c[i] = q(x[i]);
			d[i] = h * h * f(x[i]);
			u[i] = U(x[i]);
		}
		u[0] = 0;
		u[n] = 1;

		a[0] = 0;
		b[0] = 1;
		c[0] = 0;
		d[0] = 0;

		a[n] = 0;
		b[n] = 1;
		d[n] = 1;
	}
};