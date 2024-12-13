#include "MySubscriber.hpp"

void hh(const std_msgs::String::ConstPtr& msg){

}

MySubscriber::MySubscriber(ros::NodeHandle& nh){
    nh_ = nh;
    sub_ = nh_.subscribe("flag_1_WaNt_a_kir1frienD_D0_Y0U_Want_t0_be_My_gorlFrlend",10,&MySubscriber::callback,this);
}

void MySubscriber::callback(const demo_pkg::RobotStatusConstPtr& msg){
    ROS_INFO("linear_velocity:%lf\n",msg->linear_velocity);
    ROS_INFO("angular_velocity:%lf\n",msg->angular_velocity);
    ROS_INFO("status:%s\n",msg->status.c_str());
    ROS_INFO("x:%lf\n",msg->x);
    ROS_INFO("y:%lf\n",msg->y);
}