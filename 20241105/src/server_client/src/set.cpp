//服务段通信
#include <stdlib.h>
#include <ros/ros.h>


int main(int argc,char* argv[]){
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"set");
    ros::NodeHandle nh;
    nh.setParam("v1","hhh");
    for(int i = 0;;i++){
        nh.setParam("v2",i);
    }
    nh.setParam("v2",7);
    nh.setParam("hh",0.123);
    ros::param::set("v3",argv[0]);
    return 0;
}