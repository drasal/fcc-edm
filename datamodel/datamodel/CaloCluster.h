#ifndef CaloCluster_H 
#define CaloCluster_H

// contains basic cluster information
// author: C. Bernet, B. Hegner

#include "datamodel/BareCluster.h"

namespace fccedm {

class CaloCluster {
public:
  BareCluster Core; //contains basic cluster information 

};

} // Namespace
#endif
