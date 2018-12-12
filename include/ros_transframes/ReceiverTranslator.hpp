#ifndef RECEIVERTRANSLATOR_HPP
#define RECEIVERTRANSLATOR_HPP
#include <tf/transform_broadcaster.h>


class ReceiverTranslator
{
private:
    tf::TransformBroadcaster br1;
    tf::TransformBroadcaster br2;
public:
    ReceiverTranslator(ros::Time t);
    void setTransform();
    ros::Time time;
};

#endif /// RECEIVERTRANSLATOR_HPP
