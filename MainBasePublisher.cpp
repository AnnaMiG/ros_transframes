#include "ros_transframes/BasePublisher.hpp"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "tf_publisher_base");
    ros::NodeHandle n;
    ros::Rate rate(1.0);
    tf::TransformBroadcaster br;
    BasePublisher base_obj;
    /// call function to get input from user
    base_obj.inputValues();
    /// the transframe base_tf_enu will be published every second
    while(n.ok())
    {
        base_obj.baseTransformPublisher(br);
        rate.sleep();
    }
    return 0;

}
