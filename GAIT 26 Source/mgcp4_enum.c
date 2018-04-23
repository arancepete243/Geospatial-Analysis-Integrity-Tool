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
int MGCP4_ENUM_NUM=798;

char *MGCP4_enum_codes[] = {
"1",
"2",
"0",
"19",
"41",
"999",
"0",
"1",
"0",
"1000",
"1001",
"0",
"1",
"2",
"0",
"7",
"14",
"999",
"0",
"4",
"10",
"11",
"12",
"17",
"998",
"0",
"1",
"2",
"3",
"5",
"6",
"7",
"8",
"9",
"12",
"15",
"16",
"19",
"26",
"27",
"999",
"0",
"3",
"5",
"7",
"16",
"999",
"0",
"2",
"6",
"8",
"998",
"999",
"0",
"2",
"5",
"6",
"8",
"9",
"998",
"999",
"0",
"1",
"2",
"3",
"4",
"999",
"0",
"1000",
"1001",
"0",
"1000",
"1001",
"1000",
"1001",
"35",
"998",
"0",
"2",
"3",
"7",
"99",
"999",
"0",
"1",
"2",
"3",
"0",
"13",
"15",
"29",
"34",
"37",
"41",
"45",
"113",
"157",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"999",
"0",
"1000",
"1001",
"0",
"2",
"99",
"105",
"107",
"161",
"171",
"192",
"241",
"290",
"330",
"341",
"343",
"350",
"351",
"355",
"362",
"440",
"470",
"475",
"480",
"481",
"486",
"501",
"511",
"513",
"530",
"535",
"540",
"550",
"563",
"572",
"582",
"601",
"604",
"610",
"626",
"643",
"720",
"721",
"722",
"730",
"781",
"810",
"811",
"815",
"825",
"827",
"835",
"841",
"843",
"845",
"850",
"855",
"859",
"860",
"861",
"887",
"891",
"892",
"893",
"894",
"902",
"905",
"907",
"912",
"919",
"930",
"931",
"955",
"999",
"0",
"2",
"3",
"5",
"6",
"999",
"0",
"3",
"4",
"5",
"6",
"7",
"10",
"999",
"0",
"1",
"2",
"3",
"999",
"0",
"1",
"3",
"4",
"5",
"999",
"0",
"1",
"2",
"3",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"999",
"0",
"1",
"2",
"4",
"8",
"13",
"19",
"20",
"999",
"0",
"1",
"2",
"3",
"4",
"6",
"13",
"0",
"2",
"4",
"5",
"999",
"0",
"1",
"2",
"3",
"4",
"6",
"9",
"999",
"0",
"1",
"2",
"3",
"4",
"0",
"2",
"3",
"4",
"5",
"6",
"7",
"9",
"11",
"14",
"15",
"16",
"20",
"21",
"998",
"999",
"0",
"1",
"2",
"4",
"998",
"0",
"15",
"16",
"17",
"18",
"19",
"20",
"999",
"0",
"17",
"23",
"40",
"44",
"45",
"46",
"0",
"5",
"9",
"16",
"20",
"21",
"22",
"46",
"57",
"62",
"64",
"72",
"73",
"77",
"83",
"84",
"86",
"88",
"104",
"108",
"117",
"999",
"0",
"1000",
"1001",
"0",
"3",
"4",
"5",
"6",
"8",
"9",
"0",
"12",
"13",
"15",
"16",
"17",
"18",
"20",
"21",
"22",
"23",
"24",
"25",
"26",
"27",
"30",
"33",
"35",
"37",
"38",
"58",
"74",
"75",
"76",
"78",
"79",
"80",
"81",
"82",
"999",
"0",
"2",
"3",
"4",
"9",
"10",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"999",
"0",
"8",
"15",
"17",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"999",
"0",
"1",
"2",
"3",
"4",
"9",
"13",
"15",
"16",
"17",
"18",
"21",
"23",
"26",
"33",
"35",
"38",
"39",
"41",
"45",
"46",
"47",
"48",
"50",
"53",
"57",
"58",
"59",
"63",
"65",
"66",
"69",
"75",
"79",
"80",
"83",
"84",
"89",
"90",
"93",
"94",
"95",
"96",
"101",
"105",
"106",
"109",
"110",
"111",
"114",
"117",
"120",
"121",
"122",
"124",
"126",
"129",
"136",
"137",
"996",
"999",
"0",
"1000",
"1001",
"0",
"1",
"2",
"3",
"0",
"1",
"2",
"4",
"5",
"6",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"999",
"0",
"1",
"2",
"4",
"5",
"999",
"0",
"1",
"2",
"3",
"6",
"0",
"1000",
"1001",
"0",
"1",
"3",
"999",
"0",
"1",
"3",
"4",
"0",
"2",
"6",
"8",
"14",
"15",
"32",
"33",
"999",
"0",
"1",
"2",
"3",
"0",
"1",
"2",
"5",
"6",
"8",
"999",
"0",
"1",
"2",
"3",
"4",
"1",
"2",
"3",
"0",
"1",
"4",
"9",
"10",
"11",
"12",
"998",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"0",
"1000",
"1001",
"0",
"1",
"3",
"5",
"998",
"0",
"6",
"8",
"10",
"11",
"13",
"14",
"999",
"0",
"5",
"8",
"14",
"16",
"21",
"46",
"52",
"55",
"65",
"67",
"73",
"84",
"85",
"87",
"88",
"103",
"104",
"120",
"122",
"124",
"126",
"257",
"258",
"269",
"274",
"998",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"10",
"11",
"16",
"17",
"18",
"19",
"20",
"21",
"22",
"24",
"25",
"26",
"27",
"29",
"30",
"31",
"32",
"33",
"34",
"36",
"37",
"38",
"39",
"40",
"41",
"42",
"43",
"44",
"45",
"46",
"47",
"48",
"50",
"51",
"52",
"53",
"54",
"55",
"56",
"57",
"59",
"60",
"61",
"62",
"63",
"64",
"65",
"85",
"92",
"93",
"94",
"95",
"110",
"111",
"112",
"113",
"114",
"115",
"116",
"117",
"118",
"119",
"120",
"121",
"996",
"997",
"998",
"999",
"0",
"2",
"4",
"12",
"17",
"59",
"65",
"77",
"88",
"97",
"109",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"11",
"13",
"15",
"17",
"19",
"21",
"27",
"28",
"29",
"30",
"32",
"33",
"35",
"36",
"37",
"999",
"0",
"1",
"2",
"4",
"999",
"0",
"4",
"5",
"999",
"0",
"1000",
"1001",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"999",
"0",
"1",
"2",
"3",
"0",
"1",
"2",
"4",
"5",
"7",
"9",
"10",
"12",
"13",
"998",
"999",
"0",
"1",
"2",
"5",
"6",
"8",
"10",
"12",
"16",
"18",
"19",
"21",
"22",
"23",
"26",
"999",
"0",
"25",
"26",
"45",
"999",
"0",
"8",
"9",
"50",
"51",
"75",
"999",
"0",
"1",
"2",
"3",
"4",
"5",
"999",
"0",
"4",
"6",
"8",
"10",
"11",
"22",
"25",
"50",
"999",
"0",
"1",
"2",
"3",
"4",
"7",
"0",
"2",
"3",
"6",
"7",
"999",
"0",
"1",
"2",
"3",
"4",
"8",
"998",
"999",
"0",
"1",
"2",
"998",
"999",
"0",
"1",
"2",
"3",
"5"
};

char *MGCP4_enum_names[] = {
"Accurate",
"Approximate",
"Unknown",
"Helipad",
"None Available",
"Other",
"Unknown",
"Qanat Shaft",
"Unknown",
"Natural",
"Man-made",
"Unknown",
"Sparse",
"Dense",
"Unknown",
"Cranberry Bog",
"Peat Bog",
"Other",
"Unknown",
"Bascule",
"Swing-bridge",
"Lift-bridge",
"Retractable",
"Fixed",
"Not Applicable",
"Unknown",
"Open Spandrel Arch",
"Cantilever",
"Deck",
"Floating",
"Girder",
"Tower Suspension",
"Truss",
"Suspension",
"Transporter",
"Slab",
"Stringer Beam",
"Bowstring-bridge",
"Closed Spandrel Arch",
"Cable Stayed",
"Other",
"Unknown",
"Private",
"Military",
"Joint Military and Civilian",
"Civilian",
"Other",
"Unknown",
"Power Line",
"Transmission Line",
"Communication Line",
"Not Applicable",
"Other",
"Unknown",
"Chair-lift",
"Aerial Tramway",
"Gondola Lift",
"Industrial Ropeway",
"Material Tramway",
"Not Applicable",
"Other",
"Unknown",
"Open",
"Partial",
"Moveable",
"Complete",
"Other",
"Unknown",
"Uncovered",
"Covered",
"Unknown",
"Uncontrolled",
"Controlled",
"Limits and Information Unknown",
"Limits and Information Known",
"Road Interchange",
"Not Applicable",
"Unknown",
"Bridge Crane",
"Rotating Crane",
"Tower Crane",
"Container Crane",
"Other",
"Unknown",
"Fixed",
"Travelling",
"Floating",
"Unknown",
"Dry Crop",
"Fruit Tree",
"Rubber",
"Tea",
"Vegetable Crop",
"Banana",
"Cotton",
"Nut",
"Palm",
"Other",
"Unknown",
"Battery",
"Military Parapet",
"Military Trench",
"Rampart",
"Redoubt",
"Other",
"Unknown",
"Open",
"Solid Face",
"Unknown",
"Agriculture",
"Manufacturing",
"Oil-mill",
"Grain Milling",
"Sawmilling",
"Paper-mill",
"Petroleum Refining",
"Steel Mill",
"Motor Vehicle Manufacture",
"General Repair",
"Aircraft Repair",
"Motor Vehicle Repair",
"Utilities",
"Power Generation",
"Cooling",
"Water Treatment",
"Commerce",
"Petrol Sale",
"Market",
"Transport",
"Terminal",
"Signalling",
"Pumping",
"Maritime Pilotage",
"Harbour Control",
"Warehousing and Storage",
"Motor Vehicle Parking",
"Postal Activities",
"Accommodation",
"Residence",
"Restaurant",
"Print Publishing",
"Radio Broadcasting",
"Television Broadcasting",
"Telecommunications",
"Satellite Ground Control",
"Retail Banking",
"Scientific Research and Development",
"Observation Station",
"Weather Station",
"Wind Tunnel",
"Guard",
"Administration",
"Government",
"Palace",
"Diplomacy",
"Embassy",
"Defence Activities",
"Law Enforcement",
"Imprisonment",
"Firefighting",
"Education",
"Higher Education",
"Institution",
"Human Health Activities",
"In-patient Care",
"Social Work",
"Theatre",
"Auditorium",
"Community Centre",
"Opera House",
"Library",
"Museum",
"Botanical and/or Zoological Reserve Activities",
"Sports Centre",
"Animal Boarding",
"Religious Activities",
"Place of Worship",
"Yacht-club",
"Other",
"Unknown",
"Regular",
"Terraced",
"Intermingled Trees",
"Treeless",
"Other",
"Unknown",
"Ferry Terminal",
"Fishing Harbour",
"Marina",
"Naval Base",
"Tanker Terminal",
"Container Terminal",
"Other",
"Unknown",
"Mound",
"Fill",
"Dyke",
"Other",
"Unknown",
"Fallow",
"Permanent",
"Slash and Burn",
"Permanent Irrigation",
"Other",
"Unknown",
"Major",
"Minor and Hard",
"Minor and Soft",
"Other",
"Unknown",
"Small Arms",
"Tank",
"Field Artillery",
"Grenade",
"Demolition Area",
"Impact Area",
"Other",
"Unknown",
"Industrial",
"Commercial",
"Residential",
"Refugee",
"Recreational",
"Urbanized Multi-functional",
"Transportation",
"Other",
"Unknown",
"Under Construction",
"Abandoned",
"Destroyed",
"Dismantled",
"Fully Functional",
"Damaged",
"Unknown",
"Flood Barrage Gate",
"Lock Gate",
"Dyke Gate",
"Other",
"Unknown",
"Heliport",
"Land Aerodrome",
"Hospital",
"Non-hospital Building",
"Rig",
"Offshore Construction",
"Other",
"Unknown",
"Primary Route",
"Secondary Route",
"National Motorway",
"Local Route",
"Unknown",
"Cathedral",
"Chapel",
"Church",
"Marabout",
"Minaret",
"Religious Community",
"Mosque",
"Pagoda",
"Shrine",
"Tabernacle",
"Temple",
"Synagogue",
"Stupa",
"Not Applicable",
"Other",
"Unknown",
"Perennial",
"Intermittent",
"Dry",
"Not Applicable",
"Unknown",
"ALSF-I",
"ALSF-II",
"SSALF",
"SSALR",
"MALSF",
"MALSR",
"Other",
"Unknown",
"On Waterbody Bottom",
"Below Waterbody Bottom",
"Below Ground Surface",
"On Surface",
"Above Surface",
"Above Waterbody Bottom",
"Unknown",
"Asphalt",
"Brick",
"Clay",
"Composition",
"Concrete",
"Conglomerate",
"Gravel",
"Macadam",
"Masonry",
"Metal",
"Part Metal",
"Pebbles",
"Prestressed Concrete",
"Reinforced Concrete",
"Rock",
"Rubble",
"Sand",
"Soil",
"Stone",
"Wood",
"Other",
"Unknown",
"Without Median",
"With Median",
"Unknown",
"Opencast",
"Placer",
"Prospect",
"Area Strip-mine",
"Peatery",
"Below Surface",
"Unknown",
"Radio",
"Radio Telephone",
"Television (TV)",
"Microwave",
"Non-Directional Radio Beacon (NDB)",
"Non-Directional Radio Beacon (NDB) with Distance Measuring Equipment (DME) (NDB/DME)",
"VHF Omnidirectional Radio Beacon (VOR)",
"VHF Omnidirectional Radio Beacon (VOR) with Distance Measuring Equipment (DME) (VOR/DME)",
"VHF Omnidirectional Radio Beacon (VOR) with Tactical Air Navigation Aid (TACAN) (VORTAC)",
"Tactical Air Navigation Aid (TACAN)",
"Instrument Landing System (ILS)",
"Instrument Landing System (ILS) with Distance Measuring Equipment (DME) (ILS/DME)",
"Localizer (LOC)",
"Localizer (LOC) with Distance Measuring Equipment (DME) (LOC/DME)",
"Microwave Landing System (MLS)",
"Radio-telegraph",
"Radar Antenna",
"Precision Approach Radar (PAR)",
"Aeronautical Radio",
"Distance Measuring Equipment (DME)",
"ILS Back Course",
"Localizer (LOC) Back Course Marker",
"Marker Radio Beacon (MKR)",
"Outer Marker (OM)",
"Middle Marker (MM)",
"Locator Outer Marker (LOM)",
"Locator Middle Marker (LMM)",
"Rotating Beacon Light",
"Other",
"Unknown",
"Production Platform",
"Observation Platform",
"Articulated Loading Platform (ALP)",
"Accommodation Platform",
"Navigation Aid Support",
"Other",
"Unknown",
"First",
"Second",
"Third",
"Fourth",
"Fifth",
"Other",
"Unknown",
"Refuse",
"Slag",
"Spoil",
"Other",
"Unknown",
"Hydro-electric",
"Nuclear",
"Solar",
"Geothermal",
"Wind",
"Tidal",
"Thermal",
"Other",
"Unknown",
"Aircraft",
"Aluminum",
"Ammunition",
"Asphalt",
"Bauxite",
"Brick",
"Cement",
"Chemical",
"Clay",
"Coal",
"Coke",
"Concrete",
"Copper",
"Diamond",
"Dolomite",
"Explosive",
"Fish",
"Food",
"Gas",
"Petrol",
"Glass",
"Gold",
"Granite",
"Gravel",
"Ice",
"Iron",
"Lead",
"Lumber",
"Manganese",
"Marble",
"Metal",
"Oil",
"Palm",
"Paper",
"Petroleum",
"Plastic",
"Quartz",
"Radioactive Material",
"Rock",
"Rubber",
"Salt",
"Sand",
"Sewage",
"Silver",
"Snow",
"Steel",
"Stone",
"Sugar",
"Textile",
"Tobacco",
"Uranium",
"Vegetation Product",
"Water",
"Wood",
"Zinc",
"Madrepore",
"Biochemical",
"Petrochemical",
"Multiple",
"Other",
"Unknown",
"Temporary",
"Permanent",
"Unknown",
"Pier",
"Wharf",
"Quay",
"Unknown",
"Dome Enclosed",
"Mast Mounted",
"Radome on Tower",
"Scanner",
"Tower Mounted",
"Other",
"Unknown",
"Bicycle",
"Camel",
"Greyhound",
"Harness",
"Horse",
"Ice Skate",
"Motor Vehicle",
"Roller Skate",
"Track and Field",
"Other",
"Unknown",
"Buddhism",
"Islam",
"Christian",
"Judaism",
"Other",
"Unknown",
"Broad",
"Narrow",
"Standard",
"Monorail",
"Unknown",
"Separated from road",
"In road",
"Unknown",
"Columnar",
"Pinnacle",
"Other",
"Unknown",
"Electrified Track",
"Overhead Electrified",
"Non-electrified",
"Unknown",
"Carline",
"Underground Railway",
"Logging",
"Tramway",
"Funicular",
"Automated Transit System",
"Long-haul",
"Other",
"Unknown",
"Spur",
"Siding",
"Passing",
"Unknown",
"Hard/Paved",
"Loose/Unpaved",
"Grass/Sod (Soft)",
"Unimproved",
"Temporary",
"Other",
"Unknown",
"Single Arrangement",
"Double Arrangement",
"Multiple Arrangements",
"Juxtaposition",
"High Speed Rail",
"Main Line",
"Branch-line",
"Unknown",
"Alkaline",
"Mineral",
"Potable",
"Salty",
"Fresh",
"Brackish",
"Not Applicable",
"Other",
"Unknown",
"Crescent",
"Dome",
"Transverse",
"Linear",
"Parabolic",
"Ripple",
"Star",
"Dome and Transverse",
"Unknown",
"Absent",
"Present",
"Unknown",
"Fair",
"Good",
"Poor",
"Not Applicable",
"Unknown",
"Mangrove",
"Marshy",
"Stony",
"Building Rubble",
"Sandy",
"Shingly",
"Other",
"Unknown",
"Asphalt",
"Boulders",
"Cinders",
"Clay",
"Concrete",
"Gravel",
"Lava",
"Loess",
"Mud",
"Oil",
"Pebbles",
"Rock",
"Rubber",
"Salt",
"Sand",
"Frozen Water",
"Soil",
"Sand and Gravel",
"Evaporite",
"Sand and Boulders",
"Sand and Mud",
"Ice",
"Snow",
"Limestone",
"Sod",
"Not Applicable",
"Other",
"Unknown",
"ADRG",
"AAFIF",
"CHUM",
"City Graphic",
"Combat Chart",
"CADRG",
"CIB1",
"CIB5",
"DNC",
"DPF",
"DTOP 1",
"DTOP 2",
"DTOP 3",
"DTOP 4",
"DTOP 5",
"DVOF",
"FFD",
"Land Cover",
"GeoNames",
"GPS",
"ICM",
"NTM Imagery",
"Imagery",
"ITD",
"IVD",
"International Boundaries",
"JOG",
"LWD",
"MC&G",
"MSD 1",
"MSD 2",
"MSD 3",
"MSD 4",
"MSD 5",
"MIDB",
"Native Data",
"Native Map",
"Medical Facilities",
"NATE",
"Planning Graphic",
"SRTM",
"Site Map",
"TOD 0",
"TOD 1",
"TOD 2",
"TOD 3",
"TOD 4",
"TOD 5",
"UN Data",
"UVMap",
"VITD",
"VMap 0",
"VMap 1",
"VMap 2",
"WVS Plus",
"SPOT HRG Digital Terrain Model",
"Vector Data",
"1:25k Vector Data",
"1:50k Vector Data",
"1:100k Vector Data",
"Very High Resolution Commercial Monoscopic Imagery",
"Very High Resolution Commercial Stereoscopic Imagery",
"High Resolution Commercial Monoscopic Imagery",
"High Resolution Commercial Stereoscopic Imagery",
"Medium Resolution Commercial Monoscopic Imagery",
"Medium Resolution Commercial Stereoscopic Imagery",
"Low Resolution Commercial Monoscopic Imagery",
"Low Resolution Commercial Stereoscopic Imagery",
"Map 1:25k",
"Map 1:50k",
"Map 1:100k",
"Routing Data",
"Multiple",
"Unpopulated",
"Not Applicable",
"Other",
"Unknown",
"Horizontal Capped Cylindrical",
"Vertical Capped Cylindrical",
"Pyramidal",
"Spherical",
"Cylindrical with Framework",
"Cylindrical with Flat Top",
"Arched",
"Spherical on Column",
"Statue",
"Obelisk",
"Other",
"Unknown",
"Coast Guard Station",
"Fireboat Station",
"Water-police Station",
"Ice Signal Station",
"Rescue Station",
"Port Control Station",
"Pilot Station",
"Signal Station",
"Storm Signal Station",
"Tide Station",
"Time Signal Station",
"Weather Signal Station",
"Tidal Stream Station",
"Traffic Signal Station",
"Bridge Signal Station",
"Lock Signal Station",
"International Port Signals Station",
"Military Practice Signal Station",
"Warning Signal Station",
"Radar Surveillance Station",
"Pilot Lookout Station",
"Other",
"Unknown",
"Snow Shed",
"Rock Shed",
"Rock and Snow Shed",
"Other",
"Unknown",
"Spring",
"Water-hole",
"Other",
"Unknown",
"Non-Tidal",
"Tidal/Tidal Fluctuating",
"Unknown",
"'A' Frame",
"'H' Frame",
"'I' Frame",
"'T' Frame",
"'Y' Frame",
"Mast",
"Other",
"Unknown",
"Deciduous",
"Evergreen",
"Mixed",
"Unknown",
"Aeronautical",
"Aqueduct",
"Bus",
"Canal",
"Maritime",
"Pedestrian",
"Pipeline",
"Railway",
"Road",
"Not Applicable",
"Other",
"Unknown",
"Bridge Tower",
"Observation Tower",
"Light Tower",
"Water Tower",
"Cooling Tower",
"Lookout Tower",
"Fire Tower",
"Control Tower",
"Communication Tower",
"Cell Tower",
"Guard Tower",
"Industrial Tower",
"Drop Tower",
"Mine Shaft Superstructure",
"Other",
"Unknown",
"Cargo",
"Passenger",
"General",
"Other",
"Unknown",
"Grassland",
"Grassland with Trees",
"Wood",
"Herb and Brush",
"Brush",
"Other",
"Unknown",
"Cone",
"Cinder Cone",
"Shield",
"Caldera",
"Composite",
"Other",
"Unknown",
"Casuarina",
"Conifer",
"Cypress",
"Eucalyptus",
"Filao",
"Nipa",
"Palm",
"Umbrella Thorn",
"Other",
"Unknown",
"Channelized Stream",
"Braided Stream",
"Gorge",
"Wadi",
"Normal Channel",
"Unknown",
"Walled-in",
"Artesian",
"Dug",
"Drilled",
"Other",
"Unknown",
"Partly Submerged",
"Always Dry",
"Always Submerged",
"Covers and Uncovers",
"Floating",
"Not Applicable",
"Other",
"Unknown",
"Dissipating",
"Disappearing",
"Not Applicable",
"Other",
"Unknown",
"All-weather",
"Fair-weather",
"Winter Only",
"Closed in Winter"
};

int MGCP4_attr_enum_count[] = {
0,
5,
8,
5,
0,
2,
0,
4,
4,
4,
7,
16,
3,
5,
6,
8,
0,
0,
7,
3,
6,
6,
3,
4,
6,
11,
2,
3,
5,
7,
7,
6,
6,
71,
4,
9,
8,
0,
8,
2,
16,
5,
0,
0,
5,
7,
0,
3,
23,
3,
0,
0,
0,
4,
30,
7,
0,
3,
9,
61,
11,
7,
3,
0,
5,
4,
9,
3,
7,
6,
5,
4,
0,
2,
0,
9,
5,
4,
8,
3,
0,
0,
77,
0,
22,
12,
28,
5,
3,
0,
8,
16,
0,
12,
5,
0,
7,
10,
0,
7,
7,
5,
8,
9,
6,
5,
8,
6,
0
};

int MGCP4_attr_enum_start[] = {
-1,
534,
272,
204,
-1,
6,
-1,
2,
14,
494,
18,
25,
11,
363,
47,
53,
-1,
-1,
226,
70,
41,
61,
67,
83,
77,
87,
73,
531,
193,
98,
312,
198,
179,
108,
707,
217,
185,
-1,
238,
0,
251,
267,
-1,
-1,
505,
498,
-1,
8,
664,
309,
-1,
-1,
-1,
692,
319,
349,
-1,
438,
368,
377,
452,
445,
510,
-1,
469,
481,
485,
474,
356,
463,
793,
477,
-1,
75,
-1,
522,
687,
441,
539,
105,
-1,
-1,
575,
-1,
287,
652,
547,
246,
696,
-1,
699,
723,
-1,
711,
739,
-1,
744,
758,
-1,
280,
751,
233,
780,
513,
768,
788,
209,
774,
-1
};
