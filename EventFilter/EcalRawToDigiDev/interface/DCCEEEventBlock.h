#ifndef DCCEEEVENTBLOCK_HH
#define DCCEEEVENTBLOCK_HH


/*
 *\ Class DCCEEventBlock
 *
 * Specialization of the DCCEventBlock class for the EE 
 * The class instantes the DCCSCBlock, DCCEETCCBlock and DCCEESRPBlock unpacking classes
 *
 * \file DCCEEEventBlock.h
 *
 * $Date: 2007/07/24 11:39:35 $
 * $Revision: 1.5 $
 *
 * \author N. Almeida
 *
*/

#include <DataFormats/EcalRawData/interface/EcalRawDataCollections.h>
#include <DataFormats/EcalDigi/interface/EcalDigiCollections.h>
#include "DCCRawDataDefinitions.h"
#include "DCCEventBlock.h"


class DCCEEEventBlock : public DCCEventBlock{
	
  public :

   DCCEEEventBlock( DCCDataUnpacker * u, EcalElectronicsMapper * m, bool hU, bool srpU, bool tccU, bool feU, bool memU );
   
   void unpack( uint64_t * buffer, uint bufferSize, uint expFedId);
	
  protected :
  
   int unpackTCCBlocks();
   
   
};

#endif
