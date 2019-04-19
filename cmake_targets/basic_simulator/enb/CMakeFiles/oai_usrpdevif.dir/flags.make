# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# compile CXX with /usr/bin/c++
CXX_FLAGS =    -mavx2 -msse4.1 -mssse3  -std=c++11 -D'MAKE_VERSION(a,b,c)=((a)*256+(b)*16+c)' -O2 -g -DNDEBUG -fPIC  

CXX_DEFINES = -DASN1_MINIMUM_VERSION=924 -DASN_DISABLE_OER_SUPPORT -DBASIC_SIMULATOR -DCMAKER -DCMAKE_BUILD_TYPE=\"RelWithDebInfo\" -DDRIVER2013 -DENABLE_ITTI -DENABLE_NAS_UE_LOGGING -DENABLE_SECURITY -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_USE_MME -DENABLE_VCD -DENB_MODE -DEXMIMO_IOT -DFIRMWARE_VERSION="\"No svn information\"" -DFLPT_VERSION=V2 -DJUMBO_FRAME -DLINK_ENB_PDCP_TO_GTPV1U -DLOG_NO_THREAD -DMAX_NUM_CCs=1 -DNAS_BUILT_IN_UE -DNAS_UE -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=4 -DNETTLE_VERSION_MAJOR=3 -DNETTLE_VERSION_MINOR=2 -DNO_RRM -DNUMBER_OF_UE_MAX_NB_IoT=16 -DNone=1 -DOAI_NW_DRIVER_USE_NETLINK -DOAI_USRP=1 -DOPENAIR2 -DOPENAIR_LTE -DPACKAGE_BUGREPORT=\"openair4g-devel@lists.eurecom.fr\" -DPACKAGE_NAME=\"simulator_enb\" -DPACKAGE_VERSION="\"Branch: develop Abrev. Hash: 4cbd981 Date: Mon Oct 1 16:38:05 2018 +0200\"" -DPHYSIM -DPHY_CONTEXT -DRRC_VERSION=3696 -DRel14=1 -DS1AP_RELEASE=R14 -DS1AP_VERSION=3664 -DTRACE_RLC_MUTEX -DT_TRACER -DX2AP_RELEASE=R14 -DX2AP_VERSION=3680 -DXFORMS -Doai_usrpdevif_EXPORTS

CXX_INCLUDES = -I/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14 -I/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14 -I/home/user/openairinterface5g/openair3/S1AP -I/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14 -I/home/user/openairinterface5g/openair2/X2AP -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/user/openairinterface5g/targets/ARCH/USRP/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/user/openairinterface5g/targets/ARCH/mobipass -I/home/user/openairinterface5g/targets/ARCH/COMMON -I/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles -I/home/user/openairinterface5g/openair2/COMMON -I/home/user/openairinterface5g/openair2/UTIL -I/home/user/openairinterface5g/openair2/UTIL/LOG -I/home/user/openairinterface5g/openair3/COMMON -I/home/user/openairinterface5g/openair3/UTILS -I/home/user/openairinterface5g/nfapi/open-nFAPI/nfapi/public_inc -I/home/user/openairinterface5g/nfapi/open-nFAPI/common/public_inc -I/home/user/openairinterface5g/nfapi/open-nFAPI/pnf/public_inc -I/home/user/openairinterface5g/nfapi/open-nFAPI/nfapi/inc -I/home/user/openairinterface5g/nfapi/open-nFAPI/sim_common/inc -I/home/user/openairinterface5g/nfapi/open-nFAPI/pnf_sim/inc -I/home/user/openairinterface5g/openair1 -I/home/user/openairinterface5g/openair2 -I/home/user/openairinterface5g/openair2/LAYER2/RLC -I/home/user/openairinterface5g/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/user/openairinterface5g/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/user/openairinterface5g/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/user/openairinterface5g/openair2/LAYER2/PDCP_v10.1.0 -I/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES -I/home/user/openairinterface5g/openair2/RRC/LTE -I/home/user/openairinterface5g/common/utils -I/home/user/openairinterface5g/common/utils/ocp_itti -I/home/user/openairinterface5g/openair3/NAS/COMMON -I/home/user/openairinterface5g/openair3/NAS/COMMON/API/NETWORK -I/home/user/openairinterface5g/openair3/NAS/COMMON/EMM/MSG -I/home/user/openairinterface5g/openair3/NAS/COMMON/ESM/MSG -I/home/user/openairinterface5g/openair3/NAS/UE/ESM -I/home/user/openairinterface5g/openair3/NAS/UE/EMM -I/home/user/openairinterface5g/openair3/NAS/UE/API/USER -I/home/user/openairinterface5g/openair3/NAS/COMMON/IES -I/home/user/openairinterface5g/openair3/NAS/COMMON/UTIL -I/home/user/openairinterface5g/openair3/SECU -I/home/user/openairinterface5g/openair3/SCTP -I/home/user/openairinterface5g/openair3/UDP -I/home/user/openairinterface5g/openair3/GTPV1-U -I/home/user/openairinterface5g/targets/COMMON -I/home/user/openairinterface5g/openair2/ENB_APP -I/home/user/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/MAC -I/home/user/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/RRC -I/home/user/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/PDCP -I/home/user/openairinterface5g/openair2/UTIL/OSA -I/home/user/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/user/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/home/user/openairinterface5g/openair2/UTIL/MEM -I/home/user/openairinterface5g/openair2/UTIL/LISTS -I/home/user/openairinterface5g/openair2/UTIL/FIFO -I/home/user/openairinterface5g/openair2/UTIL/OCG -I/home/user/openairinterface5g/openair2/UTIL/MATH -I/home/user/openairinterface5g/openair2/UTIL/TIMER -I/home/user/openairinterface5g/openair2/UTIL/OMG -I/home/user/openairinterface5g/openair2/UTIL/OTG -I/home/user/openairinterface5g/openair2/UTIL/CLI -I/home/user/openairinterface5g/openair2/UTIL/OPT -I/home/user/openairinterface5g/openair2/UTIL/OMV -I/home/user/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/user/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/include -I/home/user/openairinterface5g -I/home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/V2 -I/home/user/openairinterface5g/openair2/UTIL/ASYNC_IF -I/home/user/openairinterface5g/common/utils/hashtable -I/home/user/openairinterface5g/common/utils/msc -I/home/user/openairinterface5g/nfapi/open-nFAPI/pnf/inc -I/home/user/openairinterface5g/nfapi/open-nFAPI/vnf/public_inc -I/home/user/openairinterface5g/nfapi/open-nFAPI/vnf/inc -I/home/user/openairinterface5g/nfapi/oai_integration -I/home/user/openairinterface5g/openair3/NAS/UE -I/home/user/openairinterface5g/openair3/NAS/UE/API/USIM -I/home/user/openairinterface5g/openair3/NAS/UE/EMM/SAP -I/home/user/openairinterface5g/openair3/NAS/UE/ESM/SAP -I/home/user/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/home/user/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/usr/include/libxml2 -I/usr/include/pgm-5.2 -I/usr/lib/x86_64-linux-gnu/pgm-5.2/include -I/usr/include/atlas -I/usr/include/X11 -I/home/user/openairinterface5g/common/utils/T 

