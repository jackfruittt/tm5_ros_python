#!/usr/bin/env python

import rospy
from tm_msgs.srv import SetPositions, SetPositionsRequest

def move_to_position(positions, motion_type=SetPositionsRequest.PTP_J, velocity=6.5, acc_time=0.2, blend_percentage=10, fine_goal=False):

    # Wait for the service to become available
    rospy.wait_for_service('tm_driver/set_positions')
    try:
        # Create a service client for setting positions
        client = rospy.ServiceProxy('tm_driver/set_positions', SetPositions)


        request = SetPositionsRequest()
        request.motion_type = motion_type
        request.positions = positions
        request.velocity = velocity
        request.acc_time = acc_time
        request.blend_percentage = blend_percentage
        request.fine_goal = fine_goal

        # Call the service and get a response
        response = client(request)

        # Check if the response was successful
        if response.ok:
            rospy.loginfo("Successfully moved to position: %s", positions)
        else:
            rospy.logwarn("Sent position command, but response not yet ok.")
    except rospy.ServiceException as e:
        rospy.logerr("Service call failed: %s", e)

if __name__ == '__main__':
    # Initialize ROS
    rospy.init_node('A2_positions')

    #Position Array
    positions_list = [
        [0, 0, 0, 0, 0, 0],
        #[1.5708,	0.3927,	-1.8326,	0,	-1.5708,	0],
        #[0.9916,	0.6754,	-1.8498,	-0.3931,	-1.5658,	-0.5792],
        #[0.9914,	0.6752,	-1.8496,	-0.3932,	-1.5658,	0.9914],
        #[2.2912,	0.6752,	-1.8497,	-0.3931,	-1.5656,	0.9919],
        #[-5.1370,	0.1945,	-2.4568,	0.6421,	-1.5497,	1.1394],
        [1.1555,	0.1867,	-2.3,	0.7278,	-1.5664,	1.1555],
        #[1.0028,	0.7041,	-1.8878,	-0.3125,	-1.5753,	1.0101],
        [2.2912,	0.6752,	-1.8497,	-0.3931,	-1.5656,	0.9919],
        [-1.8819,	-1.2916,	-0.1061,	-0.0145,	-1.5226,	1.3872],
        [1.4013,	-1.2880,	-0.1136,	-0.0106,	-1.5226,	1.3872],
        [1.4013,	-1.3977,	0.1120,	-0.1266,	-1.5226,	-0.1836],
        [-0.7678,	-0.3923,	1.8189,	0.0531,	1.4768,	0.7987]

    ]
    
    for positions in positions_list:
        move_to_position(positions)
        rospy.sleep(2)  # delay between postions 




