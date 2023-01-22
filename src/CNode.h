#ifndef NODE_PATH_CNODE_H
#define NODE_PATH_CNODE_H

#include <fstream>
#include <cstdint>
#include <vector>

typedef struct {
    uint32_t pathNodes;
    uint32_t vehicleNodes;
    uint32_t pedNodes;
    uint32_t naviNodes;
    uint32_t links;
} sNodeHeader;

typedef struct {
    uint32_t memAddr;        // unused
    uint32_t empty;          // unused
    int16_t  position[3];    // Position (XYZ), see below
    int16_t  cost;           // always 0x7FFE, used internally to calculate routes
    uint16_t linkID;
    uint16_t areaID;
    uint16_t nodeID;
    uint8_t  pathWidht;
    uint8_t  floodFill;      // used in route calculations
    uint32_t flags;
} sPathNodeEntry;

class CNode
{
public:
    CNode(std::string &nodeFile);
    CNode *read();
    void getHeader();
    void getNodes();

private:
    std::string mFilePath;
    std::ifstream mNodeFile;
    sNodeHeader mHeader;
    std::vector<sPathNodeEntry> mPedNodes;
    std::vector<sPathNodeEntry> mVehicleNodes;
};


#endif
