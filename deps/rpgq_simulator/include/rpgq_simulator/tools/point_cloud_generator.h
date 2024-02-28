#pragma once
#include <rpgq_simulator/visualization/flightmare_message_types.hpp>

namespace RPGQ {
    namespace Simulator {

        /*
        Send ZMQ message to generate point cloud in idle mode before simulation is started.

        Unity standalone has to be running while using this command.

        Point cloud will be generated by Unity and saved to the path given in 
        the PointCloudMessage_t (absolute path or relative path relative to Unity).
        
        Generation of point cloud might take some minutes.

        Not save to use during simulation.
        */
        void pointCloudGenerator(PointCloudMessage_t &pcd_msg);

    }//Simulator
}//RPGQ