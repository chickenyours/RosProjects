#include <ros/ros.h>
#include "std_msgs/String.h"
#include <sstream>
#include "hello_world/person.h"

int main(int argc, char* argv[]){
    ros::init(argc,argv,"hh");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<hello_world::person>("hh",10);
    hello_world::person person;
    person.a = 123;
    person.b = 456.0;
    ros::Rate r(1);
    while(ros::ok()){
        person.a++;
        pub.publish(person);
        r.sleep();
        ros::spinOnce();
    }
    return 0;
}