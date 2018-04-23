/************
GAIT (Geospatial Analysis Integrity Tool) is a geospatial data validation tool developed by the Institute for Defense Analyses (IDA) for the National Geospatial-Intelligence Agency (NGA).  

This source code was used to generate GAIT 26 executable software in accordance with Amendment 6 to Task Order DH-8-3815 under Contract HQ0034-14-D-0001.

IDA is furnishing this item "as is". IDA was not tasked or funded to generate developer documentation or to provide support for this source code. IDA does not provide any warranty of the item whatsoever, whether express, implied, or statutory, including, but not limited to, any warranty of fitness for a particular purpose or any warranty that the contents of the item will be error-free. In no event shall NGA or IDA be held liable for damages arising, directly or indirectly, from the use of this source code. 

This material may be reproduced by the U.S. Government pursuant to its unlimited use rights under DFARS 252.227-7014 [Feb 2014].

The Institute for Defense Analyses (IDA) is a Federally Funded Research and Development Center that provides scientific and technical expertise on issues important to national security to the Office of the Secretary of Defense, Joint Staff, Unified Commands, and Defense Agencies. 

� 2017 Institute for Defense Analyses
  4850 Mark Center Drive
  Alexandria, Virginia 22311-1882
  703.845-2000
  www.ida.org
************/
int VMAP_ATTR_NUM=126;

char *VMAP_attr_codes[] = {
"ACE",
"ACE_EVAL_METHOD_CD",
"ALE",
"ALE_EVAL_METHOD_CD",
"ACC",
"ORIGINATOR",
"APT",
"ZV3",
"AOO",
"ATC",
"ARA",
"AHC",
"BST",
"BDC",
"BOT",
"BSC",
"BFC",
"BAC",
"COD",
"COE",
"SEC_CLS_AUTHORITY",
"COMMENTS",
"COMM_CPYRT_NOTICE",
"COMPLETENESS_CODE",
"CPA",
"CUR",
"DFT",
"DMB",
"DMT",
"CRV",
"DOF",
"COMM_LIC_TIER_NOTICE",
"ELA",
"EXS",
"SPEC_ID",
"FTC",
"FCO",
"CREATION_DATE",
"FEO",
"SCALE",
"GAW",
"SGC",
"HGT",
"ZV2",
"HWT",
"HDI",
"HFC",
"HYC",
"HQC",
"LMC",
"LTN",
"LEN",
"LFA",
"LOC",
"MAC",
"MCC",
"MCS",
"MED",
"WD1",
"MIN",
"SEC_CLS_AUTH_MULT",
"NAM",
"NM3",
"NM4",
"NAS",
"NST",
"SEC_CLS_AUTH_DESC",
"OPERATOR",
"ORIG_SOURCE_DATE",
"ORIG_SOURCE_INFO",
"ORIGINATING_SOURCE",
"OHB",
"PRC",
"PCI",
"PPT",
"PPC",
"PFD",
"PFH",
"PHT",
"PRO",
"RRC",
"RGC",
"RRA",
"RSA",
"REL",
"RSTRN_FOREIGN_GOV",
"RSTRN_DECLASS",
"RSTRN_DCLS_XMPT_CD",
"RSTRN_DSEM_CTRL_IC",
"RSTRN_DSEM_CTRL_NIC",
"RSTRN_RELEASIBILITY",
"RIT",
"RST",
"RKF",
"RTT",
"SEC_CLASS",
"SEC_CLASS_SYS_ID",
"SEC_CD_CNTRL",
"SLT",
"SIC",
"SCC",
"SSC",
"SMC",
"SYMBOL_ID",
"TXT",
"RTN",
"TID",
"TTC",
"TST",
"TUC",
"TRA",
"UPDATE_SOURCE_DATE",
"UPDATE_SOURCE_INFO",
"UPDATE_SOURCE",
"USE",
"VEG",
"VDC",
"VRR",
"VCA",
"VCT",
"VGT",
"WTC",
"WFT",
"SWT",
"WID",
"Z_VALUE_TYPE"
};

char *VMAP_attr_names[] = {
"Absolute Circular Error",
"Absolute Circular Error Evaluation Method",
"Absolute Linear Error",
"Absolute Linear Error Evaluation Method",
"Accuracy Category",
"Agency that Supplied the Data",
"Airfield Type",
"Airfield/Aerodrome Elevation (meters)",
"Angle of Orientation (degrees)",
"Aqueduct Type Category",
"Area Coverage Attribute (square meters)",
"Associated Hydrographic Category",
"Boundary Status Type",
"Bridge Design Category",
"Bridge Opening Type",
"Bridge/Bridge Superstructure Category",
"Building Function Category",
"Built-up Area Classification",
"Certainty of Delineation",
"Certainty of Existence",
"Classification Authority",
"Comments",
"Commercial Copyright Notice",
"Completeness Code",
"Control Point Attribute",
"Current Type Category",
"Dam Face Type",
"Density Measure (% of Brush/Undergrowth Cover)",
"Density Measure (% of Tree/Canopy Cover)",
"Depth Curve or Contour Value (meters)",
"Direction of Flow",
"Distribution of Commercial Data",
"Elevation Accuracy",
"Existence Category",
"Extraction Specification ID",
"Farming Type Category",
"Feature Configuration",
"Feature Creation Date",
"Feature Element Orientation (degrees)",
"Feature Scale (e.g., 50000, 100000)",
"Gauge Width (centimeters)",
"Gradient/Slope (percent)",
"Height Above Surface Level (meters)",
"Highest Z-value (meters)",
"House of Worship Type",
"Hydrographic Depth/Height Information",
"Hydrographic Form Category",
"Hydrological Category",
"Hypsography Portrayal Category",
"Landmark Category",
"Lane/Track Number",
"Length/Diameter (meters)",
"Light Function Aeronautical",
"Location Category",
"Maritime Area Category",
"Material Composition Category",
"Material Composition Secondary",
"Median Category",
"Minimum Travelled Way Width (decimeters)",
"Mining Category",
"Multiple Classification Authority Sources",
"Name",
"Name 3",
"Name 4",
"Native Settlement Type",
"Navigation System Types",
"Non-standard Classification Authority",
"Operator ID",
"Originating Source Date",
"Originating Source Information",
"Originating Source Name",
"Overall Height of Bridge (meters)",
"Periodic Restriction Category",
"Point of Change Identifier",
"Populated Place Type",
"Power Plant Category",
"Predominant Feature Depth (decimeters)",
"Predominant Feature Height (decimeters)",
"Predominant Height (meters)",
"Product Category",
"Railroad Categories",
"Railroad Gauge Category",
"Railroad Power Source",
"Railroad Siding Attribute",
"Religious Denomination",
"Restrctions on Foreign Government Access",
"Restriction Declassification",
"Restriction Declassification Exemptions",
"Restrictions on Dissemination Control IC",
"Restrictions on Dissemination Control Non-IC",
"Restrictions on Releasibility",
"Road Interchange Type",
"Road/Runway Surface Type",
"Rock Strata Formation",
"Route Intended Use",
"Security Classification",
"Security Classification System Identifier",
"Security Codeword Control",
"Shoreline Type Category",
"Snow/Ice Category",
"Spring/Well Characteristic Category",
"Structure Shape Category",
"Surface Material Category",
"Symbol Identification",
"Text Attribute",
"Text Attribute",
"Tidal/Non-Tidal Category",
"Tower Type Category",
"Transmission Suspension Type",
"Transportation Use Category",
"Traversability",
"Update/Review Source Date",
"Update/Review Source Information",
"Update/Review Source Name",
"Usage",
"Vegetation Characteristics",
"Vertical Datum Category",
"Vertical Reference Category",
"Void Collection Attribute",
"Void Collection Type",
"Volcano Geologic Type",
"Weather Type Category",
"Well Feature Type",
"Well/Spring Type",
"Width (meters)",
"Z-Coordinate Type"
};

char *VMAP_attr_types[] = {
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"Short Integer",
"Integer",
"Integer",
"Short Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Integer",
"Short Integer",
"Integer",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Date",
"Integer",
"Long Integer",
"Integer",
"Integer",
"Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Short Integer",
"String",
"String",
"String",
"String",
"Short Integer",
"Short Integer",
"String",
"String",
"Date",
"String",
"Short Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Integer",
"Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"String",
"String",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"String",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Date",
"String",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Short Integer",
"Integer",
"Short Integer"
};

char *VMAP_attr_defns[] = {
"The absolute horizontal accuracy of the data's coordinates, expressed in terms of circular error in centimeters at 90% probability.  If the  data contains multiple accuracies, record the worst accuracy that applies to 10% or more of the data.",
"The code that indicates the method by which the absolute circular error was derived.",
"The absolute vertical accuracy of the data's coordinates, expressed in terms of linear error in centimeters at 90% probability.",
"The code that indicates the method by which the absolute linear error was derived.",
"Accuracy of geographic position.",
"This field is used to describe the organization or agency with which the originating author/creator of the data is associated.",
"Unique airfield type.",
"The highest point of an airport's usable runways measured in meters from mean sea level.",
"The angular distance measured from true north (0 deg) clockwise to the major axis of the feature. If the feature is square, the axis 0 through 89 deg shall be recorded. If the feature is circular, 360 deg shall be recorded.",
"Type of aqueduct.",
"The absolute area within the delineation of the feature.",
"The annual water content of the associated hydrographic feature as defined by the Inland Shoreline.",
"Identifies the status of a boundary.",
"Structural design characteristics of the bridge or bridge segment.",
"The type of structure or mechanism by which a portion of a bridge is moved to allow passage of a vessel.",
"Structural design characteristics.",
"Type or purpose of the building.",
"The indication of the relative density of the Built-Up Area.",
"Indicates knowledge of the feature's limits or information.",
"Indicates knowledge of the feature's existence.",
"The code that represents the type of classification authority used to derive a classification for data.",
"An open text field for additional information pertaining to the specified data set.",
"This field is used when a data set includes commercial products or any other copyrighted data. Example: Copyright 2000 Space Imaging, Inc. The copyright information for use of this imagery needs to be stated. Restrictions of use and distribution etc.",
"This field is used to identify whether or not the extraction area is 100% complete to the specification identified in the SPEC_ID attribute.  Valid values are 0 or 1.  A value of 0 means that the extraction area is not 100% complete to spec and a value of 1 means that it is 100% complete to spec.",
"Type of control point.",
"The horizontal movement of a body of water.",
"Type of face of a dam.",
"Actual percent (%) of ground covered by undergrowth.",
"Canopy cover measured by percent within area of feature during the summer season.",
"A specified value assigned to a particular depth curve or contour.",
"Bearing of movement or direction of the flow.",
"This field is used to identify the distribution of commercial or other restricted data.",
"Indicates whether the ZVL value is accurately known.",
"The state or condition of the feature.",
"The particular specification that was used for the extraction process.",
"Type of field pattern or use.",
"Configuration of feature.",
"Calendar date/time when feature was created in the GIFD.",
"The angular distance measured from true north (0 deg) clockwise to the predominant linear pattern of the elements within the feature.",
"The scale to which a feature or feature set was collected.",
"The width of a single pair of rails, measured along the shortest distance from inside rail to inside rail.",
"Percentage of slope.  (i.e. The change in height divided by the horizontal distance over which the change takes place, times one hundred ((h2-h1)/d)*100.)",
"Distance measured from the lowest point of the base at ground or water level (downhill side/downstream side) to the tallest point of the feature.",
"Elevation above a given datum to the highest portion of the feature.",
"Type of house of worship used.",
"Information about the accuracy or availability of depth or uncovering height of a feature.",
"Form or configuration of the hydrological feature.",
"Identifies the annual water content of the feature.",
"Type of line shown.",
"Indicates whether a feature  is used for rapid and positive orientation when size, shape, or location make it prominent in relation to surroundings. Easily recognized from line of sight - ground or air.",
"The number of track(s) or lanes of the feature, including both directions.",
"A measurement of the longer of two linear axes in meters. For a square feature, measure either axis. For a round feature, measure the diameter. For a bridge, the length is the distance between the bridge abutments.",
"Type of lighting provided or type of lighting system used.",
"Status of  feature relative to surrounding area or water.",
"Area in which certain activities or factors of significance to navigation or operations apply.",
"Characteristics of primary material composition of feature.",
"Secondary material composition of feature.",
"Presence of a divider between multiple lanes/rails.",
"Minimum width of the traveled way, excluding hard pavements and shoulders (in decimetres).",
"Unique mining characteristic.",
"This field is used to describe the list of multiple individual sources used to derive a classification for data.",
"Any identifier or code.",
"Name of the political entity on one side (relative to NM4) of a boundary line.",
"Name of the political entity on the other side (relative to NM3) of a boundary line.",
"The distribution of native dwellings within the delineated area of the feature.",
"Type of equipment or system used in electronic navigation (primary system).",
"This field is used to describe non-standard classification authority used to derive a classification for data.",
"ID of the operator that loaded the data or created the Extraction Record feature.",
"The date/time of the original source that was used for the extraction/ingest/creation of a feature.",
"Details about the originating source of the data.",
"The name of the ORIGINAL source of the data.",
"Vertical distance measured from the lowest point at ground or water level to the highest portion of bridge (including superstructure).",
"Restriction due to climate or other limitations.",
"Identifies category of feature associated with a point of change.",
"The type of populated place.",
"Energy source used to generate power.",
"Predominant depth within the delineation of feature.",
"Predominant height within delineation of feature.",
"Height of 51% or more of the feature. If not obtainable, then the average height of the feature will be used.",
"Principal material involved or product resulting from activity at site.",
"The type of railroad system used to support various transportation uses.",
"The type of gauge used.",
"Source of electrical power for railroad.",
"Type of connecting track.",
"Name of religious order at site.",
"Indicates foreign government information is included in U.S. controlled data.",
"The event upon which the declassification of the data occurs. A value of MR (Manual Review) signals that this data must be reviewed at such time that declassification is desired.",
"The code that indicates the reason that an object must remain classified beyond the 10 or 25 years automatic declassification.",
"This field is used when applicable to describe intelligence community dissemination and control of the data set or product.  This will need to reflect dissemination and control restrictions of the ORIGINATING_SOURCE.",
"This field is used when applicable to describe non-intelligence community dissemination and control of the data set or product. This will need to reflect dissemination and control restrictions of the ORIGINATING_SOURCE. This element may contain multiple dissemination control markings.",
"Denotes the countries or organizations that the data is releasable to. (This field is required when the source denotes country or organization releasability restrictions.)",
"The unique interchange design.",
"The physical surface composition of a road or runway.",
"The structure of a rock formation.",
"Intended use of the route.",
"This field is used to describe the highest classification of the data. There MUST be one and only one classification for each feature or dataset.",
"The identifier that represents a particular SECURITY-CLASSIFICATION-SYSTEM.",
"This field is used to describe the SCI control system or systems applicable to the data set.",
"The physical characteristic of the shoreline area.",
"Indicates the composition of the feature.",
"Type of available water.",
"Geometric form, appearance, or configuration of the feature.",
"Surface material composition excluding internal structural material.",
"Symbol Identification",
"Narrative or other description.",
"Official route number (I-95, M-2, A-1, etc.) assigned to the feature.",
"Identifies whether a feature is affected by tidal water.",
"Appearance or configuration of the feature.",
"Types of suspension of power transmission lines between pylons.",
"Identifies the primary user, function, or authority of the transportation system.",
"Indicates whether the feature is traversable by foot.",
"The date/time of the source that was used for the review or update of a feature.",
"Details about the update source of the data. This field is normally populated with an Image ID or a Sheet Number.",
"The name of the update source of the data.",
"Use (identifies the primary user, function, or controlling authority).",
"Type of plant or plantings.",
"The tidal datum to which soundings and drying heights are referenced.  It is usually taken to correspond to a low water stage of the tide.  (Also known as Chart Sounding Datum).",
"Relative location referenced to sounding datum, unless otherwise indicated.",
"Reason data is not collected.",
"Identifies type of missing information.",
"The type of geologic formation created by volcanic activity.",
"Weather conditions under which a feature is usable.",
"Type of well.",
"Identifies the type of spring or water-hole.",
"A measurement of the shorter of two linear axes.  For a square feature, measure either axis.  For a round feature, width shall be equal to LEN.  For a bridge, the width is the measurement perpendicular to the axis between the abutments.",
"A field that indicates how the Z coordinate value(s) on the feature was determined."
};
