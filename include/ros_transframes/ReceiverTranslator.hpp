#ifndef RECEIVERTRANSLATOR_HPP
#define RECEIVERTRANSLATOR_HPP
#include <tf/transform_broadcaster.h>


class ReceiverTranslator
{
private:
    tf::TransformBroadcaster br1;
    tf::TransformBroadcaster br2;
public:
    ReceiverTranslator();
    void setTransform();
};

#endif /// RECEIVERTRANSLATOR_HPP 
