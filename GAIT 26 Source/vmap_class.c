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
#include "share.h"
int VMAP_CLASS_NUM=194;

char *VMAP_class_codes[] = {
"FA001",
"FA000",
"AQ010",
"GB010",
"GB005",
"AK020",
"AK030",
"BB010",
"AL005",
"GB015",
"BH010",
"FA020",
"DA005",
"AK040",
"EC010",
"DB010",
"BH015",
"ZB030",
"BB040",
"AQ050",
"AQ040",
"AL015",
"AL020",
"AL025",
"AK060",
"BH020",
"AP010",
"AC020",
"DB030",
"FA030",
"AL030",
"AF010",
"BI010",
"EC040",
"BA010",
"AT050",
"AT080",
"CA010",
"ZB035",
"AQ060",
"AF020",
"AF030",
"AF040",
"DB060",
"EA010",
"AQ065",
"BG010",
"DB070",
"BI020",
"FA060",
"FA070",
"AM010",
"BE015",
"AT010",
"AB000",
"BH030",
"BB080",
"AL060",
"AK070",
"BB090",
"DB090",
"DB100",
"AK090",
"DB110",
"AJ030",
"AL070",
"AQ070",
"BH040",
"FA015",
"BH050",
"AF070",
"BH060",
"BH070",
"BA020",
"AH050",
"FA090",
"DB115",
"BJ030",
"AK100",
"AM020",
"AM030",
"EB010",
"DA010",
"EA020",
"EA055",
"BH077",
"AL100",
"BJ040",
"BJ060",
"BJ065",
"BH210",
"AP020",
"FA110",
"FA050",
"BA030",
"BB140",
"BH080",
"BH090",
"BI030",
"BH095",
"AA010",
"ZD012",
"AI020",
"AL130",
"AQ110",
"BJ020",
"DB150",
"ZD040",
"AL135",
"EA030",
"EC020",
"EA040",
"GB045",
"BJ070",
"AK120",
"AL140",
"BH110",
"BB190",
"BD100",
"AQ113",
"AL170",
"ZD015",
"BJ080",
"AD010",
"AT030",
"AT040",
"AC000",
"AQ116",
"AN010",
"AK130",
"AN050",
"AN075",
"AN060",
"BB220",
"BH120",
"BD120",
"BH130",
"BH135",
"AA040",
"BH145",
"BH140",
"AP030",
"DB160",
"BD130",
"AL200",
"GB055",
"BH155",
"BH150",
"DB170",
"EB020",
"BB230",
"BH160",
"AL105",
"AC030",
"AK150",
"BB240",
"BI040",
"BD140",
"BJ100",
"AL210",
"AD020",
"CA030",
"BH170",
"AK160",
"AM060",
"AD030",
"AK170",
"AM070",
"GB075",
"AT060",
"ZD045",
"AL240",
"AP050",
"EC030",
"BJ110",
"AQ130",
"AQ131",
"AL250",
"AQ135",
"AQ140",
"EA050",
"ZD020",
"DB180",
"AL260",
"BA040",
"BI050",
"AM080",
"BH180",
"AA050",
"AJ050",
"BD180",
"AB010",
"FA170",
"AK180"
};

char *VMAP_class_names[] = {
"Administrative Area",
"Administrative Boundary",
"Aerial Cableway Lines/Ski Lift Lines",
"Airport Lighting",
"Airport/Airfield",
"Amusement Park Attraction",
"Amusement Park",
"Anchorage",
"Animal Sanctuary",
"Apron/Hardstand",
"Aqueduct",
"Armistice Line",
"Asphalt Lake",
"Athletic Field",
"Bamboo/Cane",
"Bluff/Cliff/Escarpment",
"Bog",
"Boundary Monument",
"Breakwater/Groyne",
"Bridge Superstructure",
"Bridge/Overpass/Viaduct",
"Building",
"Built-Up Area",
"Cairn",
"Campground/Campsite",
"Canal",
"Cart Track",
"Catalytic Cracker",
"Cave",
"Cease-Fire Line",
"Cemetery",
"Chimney/Smokestack",
"Cistern",
"Cleared Way/Cut Line/Firebreak",
"Coastline/Shoreline",
"Communication Building",
"Communication Tower",
"Contour Line (Land)",
"Control Point",
"Control Tower",
"Conveyor",
"Cooling Tower",
"Crane",
"Crevice/Crevasse",
"Cropland",
"Culvert",
"Current Arrow",
"Cut",
"Dam/Weir",
"De Facto Boundary",
"Demilitarized Zone",
"Depot (Storage)",
"Depth Contour",
"Disk/Dish",
"Disposal Site/Waste Pile",
"Ditch",
"Dolphins",
"Dragon Teeth",
"Drive In Theater",
"Drydock",
"Embankment/Fill",
"Esker",
"Fairgrounds",
"Fault",
"Feedlot/Stockyard/Holding Pen",
"Fence",
"Ferry Crossing",
"Filtration/Aeration Beds",
"Firing Range/Gunnery Range",
"Fish Hatchery/Fish Farm/Marine Farm",
"Flare Pipe",
"Flume",
"Ford",
"Foreshore",
"Fortification",
"Geophysical Prospecting Grid",
"Geothermal Feature",
"Glacier",
"Golf Course",
"Grain Bin/Silo",
"Grain Elevator",
"Grassland",
"Ground Surface Element",
"Hedgerow",
"Hops",
"Hummock",
"Hut",
"Ice Cliff",
"Ice Peak/Nunatak",
"Ice Shelf",
"Inland Shoreline",
"Interchange",
"International Date Line",
"International Maritime Boundary",
"Island",
"Jetty",
"Lake/Pond",
"Land Subject to Inundation",
"Lock",
"Marsh/Swamp",
"Mine",
"Miscellaneous Cultural Feature",
"Mobile Home/Mobile Home Park",
"Monument",
"Mooring Mast",
"Moraine",
"Mountain Pass",
"Named Location",
"Native Settlement",
"Nursery",
"Oasis",
"Orchard/Plantation",
"Overrun/Stopway",
"Pack Ice",
"Park",
"Particle Accelerator",
"Penstock",
"Pier/Wharf/Quay",
"Pile/Piling/Post",
"Pipeline/Pipe",
"Plaza/City Square",
"Point of Change Identifier",
"Polar Ice",
"Power Plant",
"Power Transmission Line",
"Power Transmission Pylon",
"Processing Plant/Treatment Plant",
"Pumping Station",
"RR Track",
"Race Track",
"Railroad Siding/Railroad Spur",
"Railroad Turntable",
"Railroad Yard/Marshalling Yard",
"Ramp",
"Rapids",
"Reef",
"Reservoir",
"Rice Field",
"Rig/Superstructure",
"River/Stream Vanishing Point",
"River/Stream",
"Road (L) ; Route Marker (P)",
"Rock Strata/Rock Formation",
"Rock",
"Ruins",
"Runway",
"Salt Evaporator",
"Salt Pan",
"Sand Dunes/Sand Hills",
"Scrub/Brush",
"Seawall",
"Sebkha",
"Settlement",
"Settling Basin/Sludge Pond",
"Ski Jump",
"Slipway/Patent Slip",
"Sluice Gate",
"Snags/Stumps",
"Snow Field/Ice Field",
"Snow Shed/Rock Shed",
"Solar Panels",
"Spot Elevation",
"Spring/Water-Hole",
"Stadium/Amphitheater",
"Storage Bunker/Storage Mound",
"Substation/Transformer Yard",
"Swimming Pool",
"Tank",
"Taxiway",
"Telephone Line/Telegraph Line",
"Text Description",
"Tower (Non-Communication)",
"Trail",
"Trees",
"Tundra",
"Tunnel",
"Tunnel",
"Underground Dwelling",
"Vehicle Stopping Area/Rest Area",
"Vehicle Storage/Parking Area",
"Vineyard",
"Void Collection Area",
"Volcano",
"Wall",
"Water (Except Inland)",
"Water Intake Tower",
"Water Tower",
"Waterfall",
"Well",
"Windmill",
"Wreck",
"Wrecking Yard/Scrap Yard",
"Zone of Occupation",
"Zoo/Safari Park"
};

char *VMAP_class_defns[] = {
"An area controlled by administrative authority.",
"A line of demarcation between controlled areas.",
"Cables which are strung between elevated supports as part of a conveyor system on which cars, buckets, or other carrier units are suspended.  (See also AF020)",
"Lights used to: define and outline perimeters, runways, taxiways, etc.; guide aircraft while on the ground, and to provide guidance to aircraft on approach for landing.",
"A defined area of land or water used for landing, take-off, and movement of aircraft including associated buildings and facilities.",
"A large structure located in an Amusement Park.",
"A predominantly man-made facility equipped with recreational devices.  (See also AK090 and AK120)",
"An area of water where vessels anchor or may anchor.",
"A natural area set aside for the preservation and protection of wildlife.",
"A defined paved or hard-packed area at an airport or heliport intended for aircraft parking.",
"A pipe or artificial channel designed to transport water from a remote source, usually by gravity.  (See also BH110)",
"A line established by opposing political groups as a result of cessation of hostilities.",
"A natural pool of liquid asphalt.",
"An open area where sporting events, exercises, or games occur.",
"Woody, treelike grass.",
"A steep, vertical, or overhanging face of rock or earth.  (See also DB110)",
"A poorly drained or periodically flooded area, excluding tidal waters, with soil rich in plant residue.",
"A marker identifying the location of a surveyed boundary line.",
"A structure which protects a harbor or beach from forces of the sea.  (See also BB140)",
"Those elements of the bridge structure which are above the lowest deck.  (See also AQ055)",
"A man-made structure spanning and providing passage over a body of water, depression, or other obstacles.",
"A relatively permanent structure, roofed and usually walled and designed for some particular use.  (See also AL100)",
"An area containing a concentration of buildings and other structures.",
"A heap of stones piled up as a memorial or a landmark.  (See also AL090 and AL130)",
"A location for camping.  (See also AI020 and AQ140)",
"A man-made or improved natural waterway used for transportation.",
"An unimproved roadway.",
"A unit in which petroleum separation is carried out in the presence of a catalyst.",
"A natural subterranean chamber or series of chambers open to the Earth's surface.",
"A line along which active hostilities are suspended.",
"An area of land for burying the dead.",
"A vertical structure containing a passage or flue for discharging smoke and gases of combustion.",
"A man-made container used for collection or storage of rain water.",
"A man-made clearing in a cultural area or through a stand of trees, designed to provide access for a road, railroad, pipeline, or power transmission line, or for boundary demarcation, survey line-of-sight, or to impede the progress of forest fires.",
"The line where a land mass is in contact with a body of water.",
"A building in which communication signals are processed or controlled.",
"A relatively tall structure used for transmitting and/or receiving electronic communication signals.  (See also AQ060)",
"A line connecting points having the same vertical datum value.",
"An object or mark on the ground of known position, elevation, or both.",
"A tower-like structure that houses the persons and equipment used to control the flow of air, rail, or marine traffic.  (See also AL240)",
"An apparatus for moving materials from place to place on a moving belt or series of rollers.",
"A tower used to cool liquids.",
"A machine for lifting, shifting, and lowering objects or materials by means of a swinging boom or with the lifting apparatus supported on an overhead track.",
"A narrow fissure, crack, or rift in the Earth's surface, snow or ice.",
"An area that has been tilled for the planting of crops.  (See also EA040, EA050, and EA055)",
"A sewer or drain crossing under a road, track, or embankment, without affecting the construction of the crossed feature.",
"The flow direction of a current.",
"An excavation of the Earth's surface to provide passage for a road, railroad, canal, etc.",
"A permanent barrier across a watercourse used to impound water or to control its flow.  (See also BI040)",
"An existing line of separation not officially recognized by various governments.",
"An area where military activity is prohibited.",
"An area used for the storage of products or supplies.  (See also AB000)",
"A line connecting points of equal depth at and below the hydrographic datum.",
"A concave object used for transmitting or receiving electronic signals.",
"A site for the collecting/depositing of refuse or discarded material.  (See also AB010, AM010 and AM040)",
"A channel constructed for the purpose of irrigation or drainage.",
"A post or group of posts used for mooring, warping a ship or as an aid to navigation.",
"Regularly spaced concrete or metal barriers laid in single or multiple rows to prevent vehicle movement.",
"A place where motion pictures are shown while viewers remain in their vehicles.",
"A structure, providing support for a vessel, which has a means of removing water so that the bottom of the vessel can be exposed.",
"A raised long mound of earth or other material.  (See also BA051)",
"A long, narrow ridge of sand and gravel deposited by a glacial stream.",
"An area where permanent facilities exist to hold outdoor fairs, circuses or exhibitions.  (See also AK030 and AK120)",
"A fracture in the Earth's crust with displacement on one side of the fracture relative to the other.  (See also DB010)",
"An enclosed area in which livestock are temporarily kept.",
"A man-made barrier of relatively light structure used as an enclosure or boundary.  (See also AL260)",
"A route in a body of water where a ferry crosses from one shoreline to another.",
"An area containing layers of material used to filter or aerate water.",
"An open area designated for the purpose of discharging or detonating firearms.",
"An enclosure of water used for the breeding and/or rearing of fish.",
"An open-ended pipe at which waste gases are burned.",
"An open, inclined channel which carries water for use in such operations as mining or logging.",
"A shallow place in a body of water used as a crossing.  (See also AQ062)",
"That part of the shore or beach which lies between the low water mark and the coastline/shoreline.  The same condition may exist in non-contiguous off-shore areas.  (See also BA021, BA022, and BA023)",
"A facility constructed for the military defense of a site.  (See also AM060)",
"A grid established for the collection of geophysical data within an area.",
"A terrain surface feature controlled by or derived from the heat of the Earth's interior.",
"A large mass of snow and ice moving slowly down a slope or valley from above the snowline.",
"An area of land laid out for the game of golf.",
"An enclosed container, used for storing grain or fodder.  (See also AM011, AM070, and AM080)",
"A tall structure, equipped for loading, unloading, processing and storing grain.",
"An area composed of uncultured plants which have little or no woody tissue.",
"The surface soil characteristics of the earth.",
"A continuous growth of shrubbery planted as a fence, a boundary, or a wind break.",
"An area covered by the systematic planting of hop vines.  (See also EA010, EA040 and EA050)",
"An area of higher elevation within a swamp, bog, or marsh.",
"A small simple or crude house or shelter.  (See also AL015)",
"The vertical face of a glacier or ice shelf.",
"A rocky peak projecting above a surrounding ice field that may be perpetually covered with ice.",
"A sheet of thick ice, with level or undulating surface, attached to the land but mostly afloat which is bounded on the seaward side by an Ice Cliff (BJ040).",
"The land-water boundary for all inland hydrographic features having shorelines, Lake/Pond (BH080), or Island (BA030).",
"A connection designed to provide traffic access from one road to another.",
"A line generally coinciding with the 180th meridian, modified to avoid land, and designated as the place where each calendar day begins.",
"A line established to regulate matters between nations or groups over a specific area or territory.",
"A land mass smaller than a continent and surrounded by water.",
"A man-made barrier built out into, or in the water, primarily to restrain or direct currents and waves.  (See also AQ030 and BB040)",
"A body of water surrounded by land.  (See also BH130)",
"An area periodically covered by flood water, excluding tidal waters.  (See also BH095, ED010, and ED020)",
"An enclosure with a pair or series of gates used for raising or lowering vessels as they pass from one water level to another.  (See also BI005)",
"A saturated area, at times covered with water, supporting vegetation which may include trees.  (See also BH090, ED010, and ED020)",
"An excavation made in the earth for the purpose of extracting natural deposits.  (See also AQ090)",
"A location where geographic information or statistics may apply.",
"A site for the permanent parking of trailer(s) used as dwellings and designed without a permanent foundation.  (See also AK060 and AQ140)",
"A structure erected or maintained as a memorial to a person or event.  (See also AL025 and AL090)",
"A tower-like structure used to secure an airship.",
"An accumulation of soil and stone debris deposited by a glacier.",
"A natural route through a low place in a mountain range.",
"A geographic place on the earth, not normally appearing as a feature on a map, but having a name that is required to be placed on a map.",
"A concentration of native dwellings, generally of the hut type, which are not usually of substantial construction.",
"A place where shrubs, flowers, plants and trees are grown for transplanting, seed or grafting.",
"A small, isolated, fertile or green area in a desert region usually having a spring or well.",
"An area covered by systematic plantings of trees which yield fruits, nuts or other products.  (See also EA010, EA050 and EA055)",
"An area beyond the take-off runway designated as able to support an airplane during an aborted take-off.",
"An area of ice formed by the drifting and crushing together of floating pieces of ice.",
"An area used for recreational or ornamental purposes.  (See also AK030, AK090 and AL170)",
"An apparatus for imparting high velocities to charged particles.",
"A pipeline or channel generally used by hydroelectric plants or water mills to transport water by gravity and under pressure.  (See also BH010)",
"A structure primarily used as berthing places for vessels.",
"A long, heavy timber or section of steel, concrete, etc., forced into the earth to serve as a support, as for a pier.  (See also BC080 and BD140)",
"A tube for the conveyance of solids, liquids or gases.",
"An open area which serves as a public square in a city or town.  (See also AK120)",
"The location/position on a linear feature where the characteristics of the feature change significantly.",
"The heaviest, thickest form of ice over land or water.  (See also BJ100)",
"The building(s) and equipment necessary for the generation of electric power.  (See also AD020)",
"A system of above ground wires including their supports, which transmits electricity over distance.  (See also AT005, AT006 and AT060)",
"A pylon or pole used to support a power transmission line.",
"A site used for changing or refining a particular material.",
"A facility to move solids, liquids or gases by means of pressure or suction.",
"A rail or set of parallel rails on which a train or tram runs.",
"A course for racing.",
"A stretch of railroad tracks connected to the main track by switch(es) - used for temporary storage and loading/unloading.",
"A rotating platform with railroad tracks used for turning locomotives or cars/carriages.",
"A system of tracks within defined limits, and associated features, provided for loading/unloading and assembling trains.",
"A partially submerged hard surfaced area on a shoreline for launching and retrieving vessels or vehicles.",
"A place in a stream or river where the current is swift and the surface is usually broken by boulders and rocks.",
"A rocky or coral elevation at or near enough to the surface of the sea to be a danger to surface navigation.",
"A man-made enclosure or area formed for the storage of water.  (See also BH080)",
"An area periodically covered with water used for growing rice.",
"A vertical structure fitted for drilling or lifting operations.",
"Point at which a river or stream passes into the ground.",
"A natural flowing watercourse.",
"An open way maintained for vehicular use.",
"A visual topographic outcrop, layers or beds of rock.",
"An isolated rocky formation or a single large stone above or below the water surface.",
"The deteriorated remains of an unspecified structure.  (See also AL012)",
"A defined area, usually rectangular, used for the conventional landing and take-off of aircraft.  (Excludes GB045)",
"Shallow pools, normally man-made, used for the natural evaporation of water for the collection of salt.",
"A flat area of natural surface salt deposits.",
"Ridges or hills of sand.",
"Low-growing woody plants.  (See also EC030)",
"A structure built to protect the shore from erosion.",
"A natural depression in arid or semi-arid regions whose bed is covered with salt encrusted clayey soil.",
"A concentration of small dwellings.",
"A site where solid matter is precipitated from a liquid by evaporating or settling.",
"A ramp used for ski jumping.",
"A prepared slope for launching and recovering vessels.",
"A gate used to regulate the flow of water.  (See also BI020 and BI039)",
"A stem or a trunk of a tree below the surface of water.  (See also BC080 and BD100)",
"A large area permanently covered by snow or ice over land or water.  (See also BJ080)",
"A shelter build to protect a section of road or railroad from snow/rock slides.",
"Units of solar cells for converting sunlight into electrical energy or heat.  (See also AD010)",
"A designated location with an elevation value relative to a vertical datum.",
"A natural outflow of water from below the ground surface.  (See also AA050 and BH075)",
"An arena for holding and viewing events.",
"A structure which may be covered or surrounded with earth which is resistant to ordnance where materials or products are stored.  (See also AH050)",
"A facility, along a power line route, in which electric current is transformed and/or distributed.",
"A constructed basin used for swimming outdoors.",
"A container used for the storage of liquids or gases.  (See also AM011, AM020, and AM080)",
"A prepared surface providing access to/from runways and the aircraft parking area, terminal area, or service area, etc.",
"A system of above ground wires, including their supports, which transmit electrical signals over distance.  (See also AT005, AT006, and AT030)",
"An area in which a characteristic or an activity pertaining to the area can be described and possibly labeled on a product if deemed important at the time the product is being produced.",
"A relatively tall structure which may be used for observation, support, or storage, etc.  (See also AF030, AM080, AQ060, and BI050)",
"A path worn by the passage of people or animals.",
"Woody-perennial plants, having a self-supporting main stem or trunk.  (See also EA040, EB020 and EC015)",
"A prairie-like region in the Arctic and Subarctic zones which sustains a growth of low vegetation.",
"An underground or underwater passage, open at both ends, and usually containing a road or railroad.  (See also AQ090)",
"An underground or underwater passage, open at both ends, and usually containing a road or railroad.  (See also AQ090)",
"Underground living quarters.  (See also AL040)",
"A roadside place usually having facilities for people and/or vehicles.",
"An open land area used for storing or parking vehicles or vessels (including recreational vehicles).  (See also AI020 and AK060)",
"An area covered by the systematic planting of grape vines.  (See also EA010, EA040 and EA055)",
"An area lacking suitable source coverage, or where data is not required.",
"A mountain or hill, often conical, formed around a vent in the earth's crust through which molten rock, ash, or gases are or have been expelled.",
"A solid man-made barrier of heavy material used as an enclosure or boundary or for protection.  (See also AL070)",
"An area of water which normally has tidal fluctuations.",
"A tower-like structure associated with a dam or water source and used for the intake of water.",
"An elevated container and its supporting structure used to hold water.  (See also AM011, AM020, and AM070)",
"A vertical or nearly vertical descent of water.",
"A hole drilled or dug into the earth or sea bed for the extraction of liquids or gases.  (See also BH170)",
"A wind-driven system of vanes attached to a tower like structure (excluding wind-generated power plants).",
"The ruined remains of a vessel.",
"An area or site engaged in the wrecking, dismantling, storage, or resale of discarded products.  (See also AB000)",
"An area temporarily held and controlled by a foreign military force.",
"An area with a collection of live animals usually for public display."
};

unsigned char VMAPDOMAINS[]={
0  /*** Dummy Value ***/,
D_BOUN  /*** Administrative Area ***/,
D_BOUN  /*** Administrative Boundary ***/,
D_POPU  /*** Aerial Cableway Lines/Ski Lift Lines ***/,
D_AERO  /*** Airport Lighting ***/,
D_AERO  /*** Airport/Airfield ***/,
D_POPU  /*** Amusement Park Attraction ***/,
D_POPU  /*** Amusement Park ***/,
D_OCEN  /*** Anchorage ***/,
D_POPU  /*** Animal Sanctuary ***/,
D_AERO  /*** Apron/Hardstand ***/,
D_INWA  /*** Aqueduct ***/,
D_BOUN  /*** Armistice Line ***/,
D_PHYS  /*** Asphalt Lake ***/,
D_POPU  /*** Athletic Field ***/,
D_VEGE  /*** Bamboo/Cane ***/,
D_PHYS  /*** Bluff/Cliff/Escarpment ***/,
D_VEGE  /*** Bog ***/,
D_BOUN  /*** Boundary Monument ***/,
D_POAN  /*** Breakwater/Groyne ***/,
D_GRTR  /*** Bridge Superstructure ***/,
D_GRTR  /*** Bridge/Overpass/Viaduct ***/,
D_POPU  /*** Building ***/,
D_POPU  /*** Built-Up Area ***/,
D_BOUN  /*** Cairn ***/,
D_POPU  /*** Campground/Campsite ***/,
D_INWA  /*** Canal ***/,
D_GRTR  /*** Cart Track ***/,
D_UTAN  /*** Catalytic Cracker ***/,
D_PHYS  /*** Cave ***/,
D_BOUN  /*** Cease-Fire Line ***/,
D_POPU  /*** Cemetery ***/,
D_UTAN  /*** Chimney/Smokestack ***/,
D_INWA  /*** Cistern ***/,
D_VEGE  /*** Cleared Way/Cut Line/Firebreak ***/,
D_PHYS  /*** Coastline/Shoreline ***/,
D_UTAN  /*** Communication Building ***/,
D_UTAN  /*** Communication Tower ***/,
D_ELEV  /*** Contour Line (Land) ***/,
D_ELEV  /*** Control Point ***/,
D_POPU  /*** Control Tower ***/,
D_UTAN  /*** Conveyor ***/,
D_UTAN  /*** Cooling Tower ***/,
D_UTAN  /*** Crane ***/,
D_PHYS  /*** Crevice/Crevasse ***/,
D_VEGE  /*** Cropland ***/,
D_GRTR  /*** Culvert ***/,
D_INWA  /*** Current Arrow ***/,
D_PHYS  /*** Cut ***/,
D_INWA  /*** Dam/Weir ***/,
D_BOUN  /*** De Facto Boundary ***/,
D_BOUN  /*** Demilitarized Zone ***/,
D_UTAN  /*** Depot (Storage) ***/,
D_OCEN  /*** Depth Contour ***/,
D_UTAN  /*** Disk/Dish ***/,
D_UTAN  /*** Disposal Site/Waste Pile ***/,
D_INWA  /*** Ditch ***/,
D_POAN  /*** Dolphins ***/,
D_DEST  /*** Dragon Teeth ***/,
D_POPU  /*** Drive In Theater ***/,
D_POAN  /*** Drydock ***/,
D_PHYS  /*** Embankment/Fill ***/,
D_PHYS  /*** Esker ***/,
D_POPU  /*** Fairgrounds ***/,
D_PHYS  /*** Fault ***/,
D_UTAN  /*** Feedlot/Stockyard/Holding Pen ***/,
D_POPU  /*** Fence ***/,
D_GRTR  /*** Ferry Crossing ***/,
D_UTAN  /*** Filtration/Aeration Beds ***/,
D_BOUN  /*** Firing Range/Gunnery Range ***/,
D_INWA  /*** Fish Hatchery/Fish Farm/Marine Farm ***/,
D_UTAN  /*** Flare Pipe ***/,
D_UTAN  /*** Flume ***/,
D_GRTR  /*** Ford ***/,
D_PHYS  /*** Foreshore ***/,
D_DEST  /*** Fortification ***/,
D_UTAN  /*** Geophysical Prospecting Grid ***/,
D_PHYS  /*** Geothermal Feature ***/,
D_PHYS  /*** Glacier ***/,
D_POPU  /*** Golf Course ***/,
D_UTAN  /*** Grain Bin/Silo ***/,
D_UTAN  /*** Grain Elevator ***/,
D_VEGE  /*** Grassland ***/,
D_SUMA  /*** Ground Surface Element ***/,
D_VEGE  /*** Hedgerow ***/,
D_VEGE  /*** Hops ***/,
D_VEGE  /*** Hummock ***/,
D_POPU  /*** Hut ***/,
D_PHYS  /*** Ice Cliff ***/,
D_PHYS  /*** Ice Peak/Nunatak ***/,
D_PHYS  /*** Ice Shelf ***/,
D_PHYS  /*** Inland Shoreline ***/,
D_GRTR  /*** Interchange ***/,
D_BOUN  /*** International Date Line ***/,
D_BOUN  /*** International Maritime Boundary ***/,
D_PHYS  /*** Island ***/,
D_POAN  /*** Jetty ***/,
D_INWA  /*** Lake/Pond ***/,
D_INWA  /*** Land Subject to Inundation ***/,
D_INWA  /*** Lock ***/,
D_VEGE  /*** Marsh/Swamp ***/,
D_UTAN  /*** Mine ***/,
D_DAQU  /*** Miscellaneous Cultural Feature ***/,
D_POPU  /*** Mobile Home/Mobile Home Park ***/,
D_POPU  /*** Monument ***/,
D_AERO  /*** Mooring Mast ***/,
D_PHYS  /*** Moraine ***/,
D_PHYS  /*** Mountain Pass ***/,
D_GENE  /*** Named Location ***/,
D_POPU  /*** Native Settlement ***/,
D_VEGE  /*** Nursery ***/,
D_VEGE  /*** Oasis ***/,
D_VEGE  /*** Orchard/Plantation ***/,
D_AERO  /*** Overrun/Stopway ***/,
D_PHYS  /*** Pack Ice ***/,
D_POPU  /*** Park ***/,
D_UTAN  /*** Particle Accelerator ***/,
D_INWA  /*** Penstock ***/,
D_POAN  /*** Pier/Wharf/Quay ***/,
D_POAN  /*** Pile/Piling/Post ***/,
D_UTAN  /*** Pipeline/Pipe ***/,
D_POPU  /*** Plaza/City Square ***/,
D_DAQU  /*** Point of Change Identifier ***/,
D_PHYS  /*** Polar Ice ***/,
D_UTAN  /*** Power Plant ***/,
D_UTAN  /*** Power Transmission Line ***/,
D_UTAN  /*** Power Transmission Pylon ***/,
D_UTAN  /*** Processing Plant/Treatment Plant ***/,
D_UTAN  /*** Pumping Station ***/,
D_GRTR  /*** RR Track ***/,
D_POPU  /*** Race Track ***/,
D_GRTR  /*** Railroad Siding/Railroad Spur ***/,
D_GRTR  /*** Railroad Turntable ***/,
D_GRTR  /*** Railroad Yard/Marshalling Yard ***/,
D_POAN  /*** Ramp ***/,
D_INWA  /*** Rapids ***/,
D_OCEN  /*** Reef ***/,
D_INWA  /*** Reservoir ***/,
D_VEGE  /*** Rice Field ***/,
D_UTAN  /*** Rig/Superstructure ***/,
D_INWA  /*** River/Stream Vanishing Point ***/,
D_INWA  /*** River/Stream ***/,
D_GRTR  /*** Road (L) ; Route Marker (P) ***/,
D_PHYS  /*** Rock Strata/Rock Formation ***/,
D_OCEN  /*** Rock ***/,
D_POPU  /*** Ruins ***/,
D_AERO  /*** Runway ***/,
D_UTAN  /*** Salt Evaporator ***/,
D_UTAN  /*** Salt Pan ***/,
D_PHYS  /*** Sand Dunes/Sand Hills ***/,
D_VEGE  /*** Scrub/Brush ***/,
D_POAN  /*** Seawall ***/,
D_PHYS  /*** Sebkha ***/,
D_POPU  /*** Settlement ***/,
D_UTAN  /*** Settling Basin/Sludge Pond ***/,
D_POPU  /*** Ski Jump ***/,
D_POAN  /*** Slipway/Patent Slip ***/,
D_INWA  /*** Sluice Gate ***/,
D_OCEN  /*** Snags/Stumps ***/,
D_PHYS  /*** Snow Field/Ice Field ***/,
D_GRTR  /*** Snow Shed/Rock Shed ***/,
D_UTAN  /*** Solar Panels ***/,
D_ELEV  /*** Spot Elevation ***/,
D_INWA  /*** Spring/Water-Hole ***/,
D_POPU  /*** Stadium/Amphitheater ***/,
D_UTAN  /*** Storage Bunker/Storage Mound ***/,
D_UTAN  /*** Substation/Transformer Yard ***/,
D_POPU  /*** Swimming Pool ***/,
D_UTAN  /*** Tank ***/,
D_AERO  /*** Taxiway ***/,
D_UTAN  /*** Telephone Line/Telegraph Line ***/,
D_GENE  /*** Text Description ***/,
D_UTAN  /*** Tower (Non-Communication) ***/,
D_GRTR  /*** Trail ***/,
D_VEGE  /*** Trees ***/,
D_VEGE  /*** Tundra ***/,
D_GRTR  /*** Tunnel ***/,
D_GRTR  /*** Tunnel ***/,
D_POPU  /*** Underground Dwelling ***/,
D_GRTR  /*** Vehicle Stopping Area/Rest Area ***/,
D_GRTR  /*** Vehicle Storage/Parking Area ***/,
D_VEGE  /*** Vineyard ***/,
D_GENE  /*** Void Collection Area ***/,
D_PHYS  /*** Volcano ***/,
D_POPU  /*** Wall ***/,
D_OCEN  /*** Water (Except Inland) ***/,
D_INWA  /*** Water Intake Tower ***/,
D_UTAN  /*** Water Tower ***/,
D_INWA  /*** Waterfall ***/,
D_INWA  /*** Well ***/,
D_UTAN  /*** Windmill ***/,
D_OCEN  /*** Wreck ***/,
D_UTAN  /*** Wrecking Yard/Scrap Yard ***/,
D_BOUN  /*** Zone of Occupation ***/,
D_POPU  /*** Zoo/Safari Park ***/
};

int VMAPDOMAINSLEN = sizeof(VMAPDOMAINS)/ sizeof(unsigned char);

unsigned char VMAPSTRATS[]={
0  /*** Dummy Value ***/,
S_APPL  /*** Administrative Area ***/,
S_APPL  /*** Administrative Boundary ***/,
S_APPL  /*** Aerial Cableway Lines/Ski Lift Lines ***/,
S_APPL  /*** Airport Lighting ***/,
S_APPL  /*** Airport/Airfield ***/,
S_APPL  /*** Amusement Park Attraction ***/,
S_APPL  /*** Amusement Park ***/,
S_APPL  /*** Anchorage ***/,
S_APPL  /*** Animal Sanctuary ***/,
S_APPL  /*** Apron/Hardstand ***/,
S_APPL  /*** Aqueduct ***/,
S_APPL  /*** Armistice Line ***/,
S_APPL  /*** Asphalt Lake ***/,
S_APPL  /*** Athletic Field ***/,
S_APPL  /*** Bamboo/Cane ***/,
S_APPL  /*** Bluff/Cliff/Escarpment ***/,
S_APPL  /*** Bog ***/,
S_APPL  /*** Boundary Monument ***/,
S_APPL  /*** Breakwater/Groyne ***/,
S_APPL  /*** Bridge Superstructure ***/,
S_APPL  /*** Bridge/Overpass/Viaduct ***/,
S_APPL  /*** Building ***/,
S_APPL  /*** Built-Up Area ***/,
S_APPL  /*** Cairn ***/,
S_APPL  /*** Campground/Campsite ***/,
S_APPL  /*** Canal ***/,
S_APPL  /*** Cart Track ***/,
S_APPL  /*** Catalytic Cracker ***/,
S_APPL  /*** Cave ***/,
S_APPL  /*** Cease-Fire Line ***/,
S_APPL  /*** Cemetery ***/,
S_APPL  /*** Chimney/Smokestack ***/,
S_APPL  /*** Cistern ***/,
S_APPL  /*** Cleared Way/Cut Line/Firebreak ***/,
S_APPL  /*** Coastline/Shoreline ***/,
S_APPL  /*** Communication Building ***/,
S_APPL  /*** Communication Tower ***/,
S_APPL  /*** Contour Line (Land) ***/,
S_APPL  /*** Control Point ***/,
S_APPL  /*** Control Tower ***/,
S_APPL  /*** Conveyor ***/,
S_APPL  /*** Cooling Tower ***/,
S_APPL  /*** Crane ***/,
S_APPL  /*** Crevice/Crevasse ***/,
S_APPL  /*** Cropland ***/,
S_APPL  /*** Culvert ***/,
S_APPL  /*** Current Arrow ***/,
S_APPL  /*** Cut ***/,
S_APPL  /*** Dam/Weir ***/,
S_APPL  /*** De Facto Boundary ***/,
S_APPL  /*** Demilitarized Zone ***/,
S_APPL  /*** Depot (Storage) ***/,
S_APPL  /*** Depth Contour ***/,
S_APPL  /*** Disk/Dish ***/,
S_APPL  /*** Disposal Site/Waste Pile ***/,
S_APPL  /*** Ditch ***/,
S_APPL  /*** Dolphins ***/,
S_APPL  /*** Dragon Teeth ***/,
S_APPL  /*** Drive In Theater ***/,
S_APPL  /*** Drydock ***/,
S_APPL  /*** Embankment/Fill ***/,
S_APPL  /*** Esker ***/,
S_APPL  /*** Fairgrounds ***/,
S_APPL  /*** Fault ***/,
S_APPL  /*** Feedlot/Stockyard/Holding Pen ***/,
S_APPL  /*** Fence ***/,
S_APPL  /*** Ferry Crossing ***/,
S_APPL  /*** Filtration/Aeration Beds ***/,
S_APPL  /*** Firing Range/Gunnery Range ***/,
S_APPL  /*** Fish Hatchery/Fish Farm/Marine Farm ***/,
S_APPL  /*** Flare Pipe ***/,
S_APPL  /*** Flume ***/,
S_APPL  /*** Ford ***/,
S_APPL  /*** Foreshore ***/,
S_APPL  /*** Fortification ***/,
S_APPL  /*** Geophysical Prospecting Grid ***/,
S_APPL  /*** Geothermal Feature ***/,
S_APPL  /*** Glacier ***/,
S_APPL  /*** Golf Course ***/,
S_APPL  /*** Grain Bin/Silo ***/,
S_APPL  /*** Grain Elevator ***/,
S_APPL  /*** Grassland ***/,
S_APPL  /*** Ground Surface Element ***/,
S_APPL  /*** Hedgerow ***/,
S_APPL  /*** Hops ***/,
S_APPL  /*** Hummock ***/,
S_APPL  /*** Hut ***/,
S_APPL  /*** Ice Cliff ***/,
S_APPL  /*** Ice Peak/Nunatak ***/,
S_APPL  /*** Ice Shelf ***/,
S_APPL  /*** Inland Shoreline ***/,
S_APPL  /*** Interchange ***/,
S_APPL  /*** International Date Line ***/,
S_APPL  /*** International Maritime Boundary ***/,
S_APPL  /*** Island ***/,
S_APPL  /*** Jetty ***/,
S_APPL  /*** Lake/Pond ***/,
S_APPL  /*** Land Subject to Inundation ***/,
S_APPL  /*** Lock ***/,
S_APPL  /*** Marsh/Swamp ***/,
S_APPL  /*** Mine ***/,
S_APPL  /*** Miscellaneous Cultural Feature ***/,
S_APPL  /*** Mobile Home/Mobile Home Park ***/,
S_APPL  /*** Monument ***/,
S_APPL  /*** Mooring Mast ***/,
S_APPL  /*** Moraine ***/,
S_APPL  /*** Mountain Pass ***/,
S_APPL  /*** Named Location ***/,
S_APPL  /*** Native Settlement ***/,
S_APPL  /*** Nursery ***/,
S_APPL  /*** Oasis ***/,
S_APPL  /*** Orchard/Plantation ***/,
S_APPL  /*** Overrun/Stopway ***/,
S_APPL  /*** Pack Ice ***/,
S_APPL  /*** Park ***/,
S_APPL  /*** Particle Accelerator ***/,
S_APPL  /*** Penstock ***/,
S_APPL  /*** Pier/Wharf/Quay ***/,
S_APPL  /*** Pile/Piling/Post ***/,
S_APPL  /*** Pipeline/Pipe ***/,
S_APPL  /*** Plaza/City Square ***/,
S_APPL  /*** Point of Change Identifier ***/,
S_APPL  /*** Polar Ice ***/,
S_APPL  /*** Power Plant ***/,
S_APPL  /*** Power Transmission Line ***/,
S_APPL  /*** Power Transmission Pylon ***/,
S_APPL  /*** Processing Plant/Treatment Plant ***/,
S_APPL  /*** Pumping Station ***/,
S_APPL  /*** RR Track ***/,
S_APPL  /*** Race Track ***/,
S_APPL  /*** Railroad Siding/Railroad Spur ***/,
S_APPL  /*** Railroad Turntable ***/,
S_APPL  /*** Railroad Yard/Marshalling Yard ***/,
S_APPL  /*** Ramp ***/,
S_APPL  /*** Rapids ***/,
S_APPL  /*** Reef ***/,
S_APPL  /*** Reservoir ***/,
S_APPL  /*** Rice Field ***/,
S_APPL  /*** Rig/Superstructure ***/,
S_APPL  /*** River/Stream Vanishing Point ***/,
S_APPL  /*** River/Stream ***/,
S_APPL  /*** Road (L) ; Route Marker (P) ***/,
S_APPL  /*** Rock Strata/Rock Formation ***/,
S_APPL  /*** Rock ***/,
S_APPL  /*** Ruins ***/,
S_APPL  /*** Runway ***/,
S_APPL  /*** Salt Evaporator ***/,
S_APPL  /*** Salt Pan ***/,
S_APPL  /*** Sand Dunes/Sand Hills ***/,
S_APPL  /*** Scrub/Brush ***/,
S_APPL  /*** Seawall ***/,
S_APPL  /*** Sebkha ***/,
S_APPL  /*** Settlement ***/,
S_APPL  /*** Settling Basin/Sludge Pond ***/,
S_APPL  /*** Ski Jump ***/,
S_APPL  /*** Slipway/Patent Slip ***/,
S_APPL  /*** Sluice Gate ***/,
S_APPL  /*** Snags/Stumps ***/,
S_APPL  /*** Snow Field/Ice Field ***/,
S_APPL  /*** Snow Shed/Rock Shed ***/,
S_APPL  /*** Solar Panels ***/,
S_APPL  /*** Spot Elevation ***/,
S_APPL  /*** Spring/Water-Hole ***/,
S_APPL  /*** Stadium/Amphitheater ***/,
S_APPL  /*** Storage Bunker/Storage Mound ***/,
S_APPL  /*** Substation/Transformer Yard ***/,
S_APPL  /*** Swimming Pool ***/,
S_APPL  /*** Tank ***/,
S_APPL  /*** Taxiway ***/,
S_APPL  /*** Telephone Line/Telegraph Line ***/,
S_APPL  /*** Text Description ***/,
S_APPL  /*** Tower (Non-Communication) ***/,
S_APPL  /*** Trail ***/,
S_APPL  /*** Trees ***/,
S_APPL  /*** Tundra ***/,
S_APPL  /*** Tunnel ***/,
S_APPL  /*** Tunnel ***/,
S_APPL  /*** Underground Dwelling ***/,
S_APPL  /*** Vehicle Stopping Area/Rest Area ***/,
S_APPL  /*** Vehicle Storage/Parking Area ***/,
S_APPL  /*** Vineyard ***/,
S_APPL  /*** Void Collection Area ***/,
S_APPL  /*** Volcano ***/,
S_APPL  /*** Wall ***/,
S_APPL  /*** Water (Except Inland) ***/,
S_APPL  /*** Water Intake Tower ***/,
S_APPL  /*** Water Tower ***/,
S_APPL  /*** Waterfall ***/,
S_APPL  /*** Well ***/,
S_APPL  /*** Windmill ***/,
S_APPL  /*** Wreck ***/,
S_APPL  /*** Wrecking Yard/Scrap Yard ***/,
S_APPL  /*** Zone of Occupation ***/,
S_APPL  /*** Zoo/Safari Park ***/
};

int VMAPSTRATSLEN = sizeof(VMAPSTRATS)/ sizeof(unsigned char);


