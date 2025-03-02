#include "ver1_3DOF_draft2_capi_host.h"
static ver1_3DOF_draft2_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        ver1_3DOF_draft2_host_InitializeDataMapInfo(&(root), "ver1_3DOF_draft2");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
