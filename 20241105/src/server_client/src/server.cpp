#include <ros/ros.h>
#include "server_client/AddInts.h"


bool DoRequest(server_client::AddIntsRequest& request,
                server_client::AddIntsResponse& response){
    ROS_INFO("Get request:%d %d",request.a,request.b);
    response.sum = request.a + request.b;
    return true;
}

int main(int argc,char* argv[]){
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"server");
    ros::NodeHandle nh;
    ros::ServiceServer ser = nh.advertiseService("AddInt",DoRequest);
    ROS_INFO("服务器段启动");
    ros::spin();
}