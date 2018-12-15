#include <iostream>
#include <vector>
#include "Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::cout;
using std::endl;

MatrixXd CalculateJacobian(const VectorXd& x_state);

int main() {
  /**
   * Compute the Jacobian Matrix
   */

  // predicted state example
  // px = 1, py = 2, vx = 0.2, vy = 0.4
  VectorXd x_predicted(4);
  x_predicted << 1, 2, 0.2, 0.4;

  MatrixXd Hj = CalculateJacobian(x_predicted);

  cout << "Hj:" << endl << Hj << endl;

  return 0;
}

MatrixXd CalculateJacobian(const VectorXd& x_state) {

  MatrixXd Hj(3,4);
  // recover state parameters
  float px = x_state(0);
  float py = x_state(1);
  float vx = x_state(2);
  float vy = x_state(3);

  // TODO: YOUR CODE HERE 

  // check division by zero
  float px2py2=px*px+py*py;
  if(0==px2py2)
  {
    return Hj;
  }
  // compute the Jacobian matrix
  float H00=px/sqrt(px2py2);
  float H01=py/sqrt(px2py2);
  float H02=0;
  float H03=0;

  float H10=-py/px2py2;
  float H11=px/px2py2;
  float H12=0;
  float H13=0;

  float H20=py*(vx*py-vy*px)/pow(px2py2,3/2);
  float H21=px*(vy*px-vx*py)/pow(px2py2,3/2);
  float H22=px/sqrt(px2py2);
  float H23=py/sqrt(px2py2);
  
  Hj << H00, H01, H02, H03,
        H10, H11, H12, H13,
        H20, H21, H22, H23;
  
  return Hj;
}