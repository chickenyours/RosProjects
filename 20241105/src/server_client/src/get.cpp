//演示获取服务的的方式
#include "ros/ros.h"

int main(int argc,char* args[]){
    ros::init(argc,args,"get");
    ros::NodeHandle nh;
    //param
    double a = nh.param("hh",0.5);
    //getparam
    int b = 123;
    nh.getParamCached("v2",b);
    //getParamCached
    int c = 6;
    //hasParam
    nh.hasParam("v2");
    //searchParam
    std::string hh;
    nh.searchParam("v2",hh);
    std::vector<std::string> hhh;
    nh.getParamNames(hhh);
    nh.getParamCached("v2",c);
    nh.deleteParam("v2");
    ros::param::del("v2");
    ROS_INFO("%.3lf",a);
    ROS_INFO("%d",c);
    return 0;
}