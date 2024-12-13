#include <stdlib.h>
#include <ros/ros.h>
#include "server_client/AddInts.h"


int main(int argc,char* argv[]){
    setlocale(LC_ALL,"");
    if(argc!=3){
        return 1;
    }
    ros::init(argc,argv,"client");
    ros::NodeHandle nh;
    ros::ServiceClient cli = nh.serviceClient<server_client::AddInts>("AddInt");
    server_client::AddInts res;
    res.request.a = atoi(argv[1]);
    res.request.b = atoi(argv[2]);
    //wait for server function:
        //cli.waitForExistence();
        //ros::service::waitForService("AddInt");
    cli.waitForExistence();
    if(cli.call(res)){
        ROS_INFO("%d",res.response.sum);
    }
    return 0;
}