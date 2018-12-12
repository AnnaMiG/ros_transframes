#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include "ros_transframes/BasePublisher.hpp"


BasePublisher::BasePublisher() {}
/**
* This function takes the input from the user and gives values
* to the variables x,y,z,roll,pitch,yaw
*/
void BasePublisher::inputValues()
{
    std::cout << "Enter values" << std::endl;
    std::string s;
    getline(std::cin, s);
    std::stringstream ss;
    std::vector<float>vect;
    float i;
    ss << s;
    while (ss >> i)
    {
        vect.push_back(i);
        if (ss.peek() == ',') ss.ignore(); // ignore the commas
    }
    x     = vect.at(0);
    y     = vect.at(1);
    z     = vect.at(2);
    roll  = vect.at(3);
    pitch = vect.at(4);
    yaw   = vect.at(5);
}

/**
 * This function publishes the base_tf_enu transframe according to the values
 * x, y, z, roll, pitch, yaw that were given as input by the user
 * @param the transformBroadcaster object
 */
void BasePublisher::baseTransformPublisher(tf::TransformBroadcaster br)
{
    transform.setOrigin(tf::Vector3(x,y,z));
    q.setRPY(roll, pitch, yaw);
    transform.setRotation(q);
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "world", "base_tf_enu"));
}



