/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef MgmtRequestXmlRoots_h_
#define MgmtRequestXmlRoots_h_


#include "Doc/MgmtRequestDoc/CMgmtRequestDoc.h"

#include "Doc/DocXml/MgmtRequestXml/MgmtRequestXmlLink.h"

namespace Caf {

	namespace XmlRoots {

		/// Saves the MgmtRequestDoc to a string.
		std::string MGMTREQUESTXML_LINKAGE saveMgmtRequestToString(
			const SmartPtrCMgmtRequestDoc mgmtRequestDoc);

		/// Parses the MgmtRequestDoc from the string.
		SmartPtrCMgmtRequestDoc MGMTREQUESTXML_LINKAGE parseMgmtRequestFromString(
			const std::string xml);

		/// Saves the MgmtRequestDoc to a file.
		void MGMTREQUESTXML_LINKAGE saveMgmtRequestToFile(
			const SmartPtrCMgmtRequestDoc mgmtRequestDoc,
			const std::string filePath);

		/// Parses the MgmtRequestDoc from the file.
		SmartPtrCMgmtRequestDoc MGMTREQUESTXML_LINKAGE parseMgmtRequestFromFile(
			const std::string filePath);
	}
}

#endif /* MgmtRequestXmlRoots_h_ */
