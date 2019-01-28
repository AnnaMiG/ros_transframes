#ifndef RECEIVERTRANSLATOR_HPP
#define RECEIVERTRANSLATOR_HPP
#include <tf/transform_broadcaster.h>
#include <ros/ros.h>
#include <math.h>

class ReceiverTranslator
{
private:
    tf::TransformBroadcaster br1;
    tf::TransformBroadcaster br2;
public:
    ReceiverTranslator();
    void setTransform(ros::Time t);
};

#endif /// RECEIVERTRANSLATOR_HPP
