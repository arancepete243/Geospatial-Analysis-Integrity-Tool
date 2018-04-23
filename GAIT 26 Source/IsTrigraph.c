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
int NumCountryCodes = 277;

char *CountryCodes[] = {
"ABW",
"ACGU",
"AFG",
"AGO",
"AIA",
"ALA",
"ALB",
"AND",
"ANT",
"APFS",
"ARE",
"ARG",
"ARM",
"ASM",
"ATA",
"ATF",
"ATG",
"AUS",
"AUT",
"AZE",
"BDI",
"BEL",
"BEN",
"BES",
"BFA",
"BGD",
"BGR",
"BHR",
"BHS",
"BIH",
"BLM",
"BLR",
"BLZ",
"BMU",
"BOL",
"BRA",
"BRB",
"BRN",
"BTN",
"BVT",
"BWA",
"BWCS",
"CAF",
"CAN",
"CCK",
"CFCK",
"CFUP",
"CHE",
"CHL",
"CHN",
"CIV",
"CMFC",
"CMFP",
"CMR",
"COD",
"COG",
"COK",
"COL",
"COM",
"CPMT",
"CPV",
"CRI",
"CUB",
"CUW",
"CWCS",
"CXR",
"CYM",
"CYP",
"CZE",
"DEU",
"DJI",
"DMA",
"DNK",
"DOM",
"DZA",
"ECU",
"EFOR",
"EGY",
"ERI",
"ESH",
"ESP",
"EST",
"ETH",
"EUDA",
"FGI",
"FIN",
"FJI",
"FLK",
"FRA",
"FRO",
"FSM",
"FVEY",
"GAB",
"GBR",
"GCTF",
"GEO",
"GGY",
"GHA",
"GIB",
"GIN",
"GLP",
"GMB",
"GMIF",
"GNB",
"GNQ",
"GRC",
"GRD",
"GRL",
"GTM",
"GUF",
"GUM",
"GUY",
"HKG",
"HMD",
"HND",
"HRV",
"HTI",
"HUN",
"IDN",
"IESC",
"IMN",
"IND",
"IOT",
"IRL",
"IRN",
"IRQ",
"ISAF",
"ISL",
"ISR",
"ITA",
"JAM",
"JEY",
"JOR",
"JPN",
"KAZ",
"KEN",
"KFOR",
"KGZ",
"KHM",
"KIR",
"KNA",
"KOR",
"KWT",
"LAO",
"LBN",
"LBR",
"LBY",
"LCA",
"LIE",
"LKA",
"LSO",
"LTU",
"LUX",
"LVA",
"MAC",
"MAF",
"MAR",
"MCFI",
"MCO",
"MDA",
"MDG",
"MDV",
"MEX",
"MHL",
"MIFH",
"MKD",
"MLEC",
"MLI",
"MLT",
"MMR",
"MNE",
"MNG",
"MNP",
"MOZ",
"MRT",
"MSR",
"MTQ",
"MUS",
"MWI",
"MYS",
"MYT",
"NACT",
"NAM",
"NATO",
"NCL",
"NER",
"NFK",
"NGA",
"NIC",
"NIU",
"NLD",
"NOR",
"NPL",
"NRU",
"NZL",
"OMN",
"PAK",
"PAN",
"PCN",
"PER",
"PHL",
"PLW",
"PNG",
"POL",
"PRI",
"PRK",
"PRT",
"PRY",
"PSE",
"PYF",
"QAT",
"REU",
"ROU",
"RUS",
"RWA",
"SAU",
"SDN",
"SEN",
"SGP",
"SGS",
"SHN",
"SJM",
"SLB",
"SLE",
"SLV",
"SMR",
"SOM",
"SPAA",
"SPM",
"SRB",
"SSD",
"STP",
"SUR",
"SVK",
"SVN",
"SWE",
"SWZ",
"SXM",
"SYC",
"SYR",
"TCA",
"TCD",
"TEYE",
"TGO",
"THA",
"TJK",
"TKL",
"TKM",
"TLS",
"TON",
"TTO",
"TUN",
"TUR",
"TUV",
"TWN",
"TZA",
"UGA",
"UKR",
"UMI",
"UNCK",
"UNKNOWN",
"URY",
"USA",
"UZB",
"VAT",
"VCT",
"VEN",
"VGB",
"VIR",
"VNM",
"VUT",
"WLF",
"WSM",
"YEM",
"ZAF",
"ZMB",
"ZWE"
};