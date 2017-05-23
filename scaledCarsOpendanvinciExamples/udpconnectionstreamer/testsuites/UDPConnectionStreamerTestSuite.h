#ifndef SCALEDCARS_CONTROL_UDPCONNECTIONSTREAMER_TESTSUITE_H
#define SCALEDCARS_CONTROL_UDPCONNECTIONSTREAMER_TESTSUITE_H

#include "cxxtest/TestSuite.h"

// Include local header files.
#include "../include/UDPConnectionStreamer.h"

using namespace std;
using namespace scaledcars::control;

class UDPConnectionStreamerTest : public CxxTest::TestSuite {
   public:
    void setUp() {}

    void tearDown() {}

    void testApplication() {
        TS_ASSERT(true);
    }
};

#endif /*SCALEDCARS_CONTROL_UDPCONNECTIONSTREAMER_TESTSUITE_H*/
