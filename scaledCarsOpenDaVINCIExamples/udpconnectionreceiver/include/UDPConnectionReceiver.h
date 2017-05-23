#ifndef UDPCONNECTIONRECEIVER_H
#define UDPCONNECTIONRECEIVER_H

#include <opendavinci/odcore/base/module/TimeTriggeredConferenceClientModule.h>
#include <opendavinci/odcore/data/Container.h>
#include <opendavinci/odcore/data/TimeStamp.h>
#include <opendavinci/odcore/base/Lock.h>

#include <opendavinci/odcore/wrapper/SharedMemory.h>
#include <opendavinci/odcore/wrapper/SharedMemoryFactory.h>

#include <opendavinci/odcore/io/StringListener.h>
#include <opendavinci/odcore/io/udp/UDPReceiver.h>
#include <opendavinci/odcore/io/udp/UDPFactory.h>
#include <opendavinci/odcore/io/conference/ContainerConference.h>

#include "automotivedata/generated/automotive/VehicleData.h"
#include "automotivedata/generated/automotive/miniature/SensorBoardData.h"
#include <automotivedata/GeneratedHeaders_AutomotiveData.h>
#include <opendavinci/GeneratedHeaders_OpenDaVINCI.h>
#include "odvdscaledcarsdatamodel/generated/group5/UdpMSG.h"

#include <iostream>
#include <memory>
#include <stdint.h>
#include <string>
#include <opendavinci/odcore/base/Thread.h>

#include "Netstrings.hpp"

#include <opendavinci/odcore/base/KeyValueConfiguration.h>

namespace scaledcars {
    namespace control {

        using namespace std;
        using namespace odcore;
        using namespace odcore::io;
        using namespace odcore::io::udp;
        using namespace odcore::base::module;
        using namespace odcore::data;
        using namespace odcore::wrapper;

        class UDPReceiveBytes : public odcore::io::StringListener {

            virtual void nextString(const std::string &s);
        };

        class UDPConnectionReceiver : public odcore::base::module::TimeTriggeredConferenceClientModule {

        private:
            /**
             * "Forbidden" copy constructor.
             *
             * Goal: The compiler should warn already at compile time
             * for unwanted bugs caused by any misuse of the copy
             * constructor.
             *
             * @param obj Reference to an object of this class.
             */
            UDPConnectionReceiver(const UDPConnectionReceiver &/*obj*/);

            /**
             * "Forbidden" assignment operator.
             *
             * Goal: The compiler should warn already at compile time
             * for unwanted bugs caused by any misuse of the assignment
             * operator.
             *
             * @param obj Reference to an object of this class.
             * @return Reference to this instance.
             */
            UDPConnectionReceiver &operator=(const UDPConnectionReceiver &/*obj*/);

        public:
            /**
             * Constructor.
             *
             * @param argc Number of command line arguments.
             * @param argv Command line arguments.
             */
            UDPConnectionReceiver(const int &argc, char **argv);

            virtual ~UDPConnectionReceiver();

        private:
            void setUp();

            void tearDown();

            odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode body();

            shared_ptr <UDPReceiver> udp_receiver;
        };
    }
} // scaledcars::control

#endif /*UDPCONNECTIONRECEIVER_H*/
