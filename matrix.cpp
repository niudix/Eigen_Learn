#include <eigen3/Eigen/Dense>
#include<iostream>
using namespace std;



int main(){
    //Define a zeros mtx;
    Eigen::Matrix<double,10,10>mtx_1=Eigen::Matrix<double,10,10>::Zero();
    cout<<"mtx_1"<<endl;
    cout<<mtx_1<<endl;

    // 斜对称矩阵
    Eigen::MatrixXd mtx_2=Eigen::MatrixXd::Identity(5,5);
    cout<<"mtx_2"<<endl;
    cout<<mtx_2<<endl;

    //    mtx_2.block<3,3>(0,0): 这部分是在访问或引用mtx_2矩阵中的一个3x3大小的子块（block）。子块的左上角起始于mtx_2的(0,0)位置，即矩阵的第一行第一列。(在里（）代表的数值就是3*3的矩阵的开始位置)
    //=(8*8)*Eigen::Matrix3d::Identity(3,3);: 这部分是将上述子块设置为一个3x3的单位矩阵（每个对角线元素为1，其余元素为0），然后将这个单位矩阵乘以64（因为8*8等于64）。
    // 这意味着这个3x3的子块中的每个对角线元素将被设置为64，而其余元素仍然为0。
    mtx_2.block<3,3>(0,0)=(8*8)*Eigen::Matrix3d::Identity(3,3);
    cout<<"mtx_2_changed"<<endl;
    cout<<mtx_2<<endl;

    Eigen::MatrixXd mtx_3=Eigen::MatrixXd::Ones(5,5);
    cout<<"mtx_3"<<endl;
    cout<<mtx_3<<endl;
    
    //四维矩阵
    Eigen::MatrixXd mtx_4=Eigen::Matrix4d::Ones();
    cout<<"mtx_4"<<endl;
    cout<<mtx_4<<endl;

    return 0;
}