#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <math.h>
#include "ros_transframes/ReceiverTranslator.hpp"

/**
 * This class subscribes to world/base_tf_enu , converts it into NED and NWU and
 * publishes converted reference frames into world/tf_ned and world/tf_nwu accordingly
 */
ReceiverTranslator::ReceiverTranslator()
{
    //! @name transform objects for both translations
    tf::TransformBroadcaster br1;
    tf::TransformBroadcaster br2;
}
    void ReceiverTranslator::setTransform(ros::Time time)
    {
        tf::Transform transform1;
        transform1.setOrigin(tf::Vector3(0.0,0.0,0.0));
        tf::Quaternion q1;
        q1.setRPY(M_PI,0.0,M_PI);
        transform1.setRotation(q1);

        tf::Transform transform2;
        transform2.setOrigin(tf::Vector3(0.0,0.0,0.0));
        tf::Quaternion q2;
        q2.setRPY(0.0,0.0,M_PI/2);
        transform2.setRotation(q2);

        // create transform from base_tf_enu to tf_ned
        br1.sendTransform(tf::StampedTransform(transform1, time, "base_tf_enu", "tf_ned"));
        // create transform from base_tf_enu to tf_ned
        br2.sendTransform(tf::StampedTransform(transform2, time, "base_tf_enu", "tf_nwu"));
    }

