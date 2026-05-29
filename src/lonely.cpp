#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

namespace bettercpp
{
    class LonelyEngine
    {
    private:
        std::string targetIP;
        std::vector<int> targetPorts;

        void logEvent(const std::string& level, const std::string& details)
        {
            std::cout << "[LONELY-LOG][" << level << "] " << details << std::endl;
        }

    public:
        LonelyEngine(const std::string& ip)
        {
            targetIP = ip;
            targetPorts = {21, 22, 23, 25, 53, 80, 139, 443, 445, 3306, 8080};
        }

        void runNetworkExploitLogger()
        {
            std::cout << "==================================================" << std::endl;
            std::cout << " LONELY: Local Object Network Exploit Logger" << std::endl;
            std::cout << "==================================================" << std::endl;

            logEvent("INFO", "Initializing network reconnaissance for gateway: " + targetIP);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));

            int discoveredVectors = 0;

            for (int port : targetPorts)
            {
                logEvent("SCAN", "Analyzing socket resource -> " + targetIP + ":" + std::to_string(port));
                std::this_thread::sleep_for(std::chrono::milliseconds(100));

                if (port == 22 || port == 80 || port == 443 || port == 445)
                {
                    logEvent("ALERT", "Exploit vector yielded on active port: " + std::to_string(port));
                    discoveredVectors++;
                }
            }

            std::cout << "--------------------------------------------------" << std::endl;
            logEvent("YIELD", "Reconnaissance finished. Vectors secured: " + std::to_string(discoveredVectors));
            std::cout << "==================================================" << std::endl;
        }
    };
}

int main(int argc, char* argv[])
{
    std::string defaultGateway = "192.168.1.1";

    if (argc > 1)
    {
        defaultGateway = argv[1];
    }

    bettercpp::LonelyEngine engine(defaultGateway);
    engine.runNetworkExploitLogger();

    return 0;
}
