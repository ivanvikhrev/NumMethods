#include "stdafx.h"

void Task::CreateCoeffs() {
	gamma = new double[n + 1];
	beta = new double[n + 1];
	alpha = new double[n + 1];
	gamma[0] = b[0];
	beta[0] = 0; //d[0]/gamma[0];
	alpha[0] = 0;//-c[0] / gamma[0];
	for( int i = 1; i <= n ; i++){
		gamma[i] = b[i]-alpha[i - 1];//b[i] + a[i] * alpha[i-1];
		alpha[i] = 1/gamma[i];//-c[i] / gamma[i];
		beta[i] = (d[i] + beta[i - 1]) / gamma[i];//(d[i] - alpha[i] * beta[i - 1]) / gamma[i];
		//alpha[i] = b[i - 1] / (c[i - 1] - alpha[i - 1] * a[i - 1]);
		//beta[i] = (-d[i - 1] + beta[i - 1] * a[i - 1]) / (c[i - 1] - alpha[i - 1] * a[i - 1]);
	}
}

void Task::ThomasAlgoritm() {
	
	CreateCoeffs();

	v[n] = 1;//beta[n];
	for (int i = n-1; i >= 0; i--) {
		v[i] = alpha[i] * v[i + 1] + beta[i];
	}

}