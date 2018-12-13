#include "stdafx.h"

void Task::CreateCoeffs() {

	beta = new double[n];
	alpha = new double[n];
	alpha[0] = kappa1;
	beta[0] = mu1;
	for( int i = 0; i < n-1 ; i++){
	 
		alpha[i+1] = B[i] / (C[i] - alpha[i] * A[i]);
		beta[i+1] = (F[i]+beta[i] * A[i]) / (C[i] - alpha[i] * A[i]);
	}

}

void Task::ThomasAlgoritm() {
	
	CreateCoeffs();

	v[n] = (mu2 + beta[n - 1] * kappa2) / (1 - alpha[n - 1] * kappa2);
	for (int i = n-1; i >= 0; i--) {
		v[i] = alpha[i] * v[i + 1] + beta[i];
	}

}