# ros_transframes

In order to run the code, you should create a ros package on your catkin workspace with the same name as the repository and clone all the files and folders into it (replace the CMakeLists.txt and package.xml that were created when you created the ros package).

Then just build the code with catkin_make at the root of your workspace.

Before running, source devel/setup.bash of your catkin_ws.

When you run BasePublisher and ReceiverTranslator you also have to run tf.

for example:

rosrun tf tf_echo /world /base_tf_enu
