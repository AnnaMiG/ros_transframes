//
// Created by prodrone on 11-10-2018.
//
#include <tf/transform_broadcaster.h>
#include "ros/ros.h"
#include "ros_transframes/ReceiverTranslator.hpp"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "tf_receiver_translator");
    ros::NodeHandle n;
    ros::Rate rate(1.0);
    ReceiverTranslator tr_Obj;
    /// the transframes tf_ned and tf_nwu will be published every second
    while(n.ok())
    {
        tr_Obj.setTransform();
        rate.sleep();
    }
    return 0;
}