#include "UDPConnectionStreamer.h"

int32_t main(int32_t argc, char **argv) {
    scaledcars::control::UDPConnectionStreamer udpconnectionstreamer(argc, argv);
    return udpconnectionstreamer.runModule();
}
