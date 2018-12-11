#ifndef BASEPUBLISHER_HPP
#define BASEPUBLISHER_HPP
#include <tf/transform_broadcaster.h>


class BasePublisher{

public:
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float roll = 0.0;
    float pitch = 0.0;
    float yaw = 0.0;
    tf::Transform transform;
    tf::Quaternion q;
    BasePublisher();
    void inputValues();
    void baseTransformPublisher(tf::TransformBroadcaster br);
};

#endif /// BASEPUBLISHER_HPP 
