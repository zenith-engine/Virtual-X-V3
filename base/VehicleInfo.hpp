#pragma once
#include "invoker/Natives.hpp"

namespace VX
{
	class VehicleInfo
	{
	private:
		
	public:
		Vector2 m_positionSclVeh;
	public:
		void Init();
		void Update(Hash model);
		void Stats(Hash model);
		void DisplayVehicle(std::string texture1, std::string texture2);
		int Clamp(int val, int min, int max);
		bool ClampV2(int val, int min, int max);
	};

	VehicleInfo* GetVehicleInfo();

	static struct {
		Hash hashvehicle;
		const char* vehiclePreviewDict;
		const char* vehicleName;
	} VehiclePreviews[700] = {
	{ 0x4C80EB0E, "candc_default", "airbus" },
	{ 0xCEEA3F4B, "candc_default", "barracks" },
	{ 0x1A79847A, "candc_default", "boxville4" },
	{ 0xD577C962, "candc_default", "bus" },
	{ 0x2F03547B, "candc_default", "buzzard" },
	{ 0xFCFCB68B, "candc_default", "cargobob" },
	{ 0x84718D34, "candc_default", "coach" },
	{ 0x132D5A1A, "candc_default", "crusader" },
	{ 0xB6410173, "candc_default", "dubsta3" },
	{ 0xEC8F7094, "candc_default", "dukes" },
	{ 0x810369E2, "candc_default", "dump" },
	{ 0x39D6E83F, "candc_default", "hydra" },
	{ 0x9114EADA, "candc_default", "insurgent" },
	{ 0x7B7E56F0, "candc_default", "insurgent2" },
	{ 0xF8D48E7A, "candc_default", "journey" },
	{ 0x49863E9C, "candc_default", "marshall" },
	{ 0x36848602, "candc_default", "mesa" },
	{ 0x84F42E51, "candc_default", "mesa3" },
	{ 0xCD93A7DB, "candc_default", "monster" },
	{ 0x35ED670B, "candc_default", "mule" },
	{ 0x85A5B471, "candc_default", "mule3" },
	{ 0x885F3671, "candc_default", "pbus" },
	{ 0xBE819C63, "candc_default", "rentbus" },
	{ 0x2EA68690, "candc_default", "rhino" },
	{ 0xFB133A17, "candc_default", "savage" },
	{ 0x83051506, "candc_default", "technical" },
	{ 0xA09E15FD, "candc_default", "valkyrie" },

	{ 0x1E5E54EA, "dock_default", "dinghy3" },
	{ 0x33581161, "dock_default", "jetmax" },
	{ 0xC1CE1183, "dock_default", "marquis" },
	{ 0xC2974024, "dock_default", "seashark" },
	{ 0x0DC60D2B, "dock_default", "speeder" },
	{ 0x17DF5EC2, "dock_default", "squalo" },
	{ 0xC07107EE, "dock_default", "sub2" },
	{ 0xEF2295C9, "dock_default", "suntrap" },
	{ 0x1149422F, "dock_default", "tropic" },

	{ 0x31F0B376, "elt_default", "annihl" },
	{ 0xD9927FE3, "elt_default", "cuban800" },
	{ 0xCA495705, "elt_default", "dodo" },
	{ 0x39D6779E, "elt_default", "duster" },
	{ 0x2C634FBD, "elt_default", "frogger" },
	{ 0x250B0C5E, "elt_default", "luxor" },
	{ 0x97E55D11, "elt_default", "mammatus" },
	{ 0x9D0450CA, "elt_default", "maverick" },
	{ 0xB79C1BF5, "elt_default", "shamal" },
	{ 0x81794C70, "elt_default", "stunt" },
	{ 0x761E2AD3, "elt_default", "titan" },
	{ 0x9C429B6A, "elt_default", "velum" },
	{ 0x403820E8, "elt_default", "velum2" },

	{ 0x4FF77E37, "elt_dlc_business", "vestra" },

	{ 0xB79F589E, "elt_dlc_luxe", "luxor2" },
	{ 0x4019CB4C, "elt_dlc_luxe", "swift2" },

	{ 0x6CBD1D6D, "elt_dlc_pilot", "besra" },
	{ 0x09D80F93, "elt_dlc_pilot", "miljet" },
	{ 0xEBC24DF2, "elt_dlc_pilot", "swift" },

	{ 0xB779A091, "lgm_default", "adder" },
	{ 0xC1E908D2, "lgm_default", "banshee" },
	{ 0x9AE6DDA1, "lgm_default", "bullet" },
	{ 0x7B8AB45F, "lgm_default", "carboniz" },
	{ 0x00ABB0C0, "lgm_default", "carbon" },
	{ 0xB1D95DA0, "lgm_default", "cheetah" },
	{ 0x13B57D8A, "lgm_default", "cogcabri" },
	{ 0xC1AE4D16, "lgm_default", "comet2" },
	{ 0x067BC037, "lgm_default", "coquette" },
	{ 0xDE3D9D22, "lgm_default", "elegy2" },
	{ 0xB2FE5CF9, "lgm_default", "entityxf" },
	{ 0xFFB15B5E, "lgm_default", "exemplar" },
	{ 0x8911B9F5, "lgm_default", "feltzer" },
	{ 0x0239E390, "lgm_default", "hotknife" },
	{ 0x3EAB5555, "lgm_default", "jb700" },
	{ 0x206D1B68, "lgm_default", "khamel" },
	{ 0xE62B361B, "lgm_default", "monroe" },
	{ 0xDA288376, "sssa_dlc_heist", "nemesis" },
	{ 0x3D8FA25C, "lgm_default", "ninef" },
	{ 0xA8E38B01, "lgm_default", "ninef2" },
	{ 0x8CB29A14, "lgm_default", "rapidgt" },
	{ 0x679450AF, "lgm_default", "rapidgt2" },
	{ 0x5C23AF9B, "lgm_default", "stinger" },
	{ 0x82E499FA, "lgm_default", "stingerg" },
	{ 0x9F4B77BE, "lgm_default", "voltic_tless" },
	{ 0x2D3BD401, "lgm_default", "ztype" },

	{ 0x2DB8D1AA, "lgm_dlc_business", "alpha" },
	{ 0xB2A716A3, "lgm_dlc_business", "jester" },
	{ 0x185484E1, "lgm_dlc_business", "turismor" },

	{ 0x3C4E2113, "lgm_dlc_pilot", "coquette2" },

	{ 0x1D06D681, "lgm_dlc_business2", "huntley" },
	{ 0xF77ADE32, "lgm_dlc_business2", "massacro" },
	{ 0x6D6F8F43, "lgm_dlc_business2", "thrust" },
	{ 0xAC5DF515, "lgm_dlc_business2", "zentorno" },

	{ 0xBF1691E0, "lgm_dlc_lts_creator", "furore" },

	{ 0xA29D6D10, "lgm_dlc_luxe", "feltzer3" },
	{ 0x767164D6, "lgm_dlc_luxe", "osiris" },
	{ 0xE2504942, "lgm_dlc_luxe", "virgo" },
	{ 0x5E4327C8, "lgm_dlc_luxe", "windsor" },
	{ 0xA7CE1BC5, "lgm_dlc_luxe", "brawler" },
	{ 0xAF599F01, "lgm_dlc_luxe", "vindicator" },
	{ 0x14D69010, "lgm_dlc_luxe", "chino" },
	{ 0x2EC385FE, "lgm_dlc_luxe", "coquette3" },
	{ 0x6322B39A, "lgm_dlc_luxe", "t20" },

	{ 0x3FD5AA2F, "dock_default", "toro" },

	{ 0x43779C54, "pandm_default", "bmx" },
	{ 0x1ABA13B5, "pandm_default", "cruiser" },
	{ 0xF4E1AA15, "pandm_default", "scorcher" },
	{ 0x4339CD69, "pandm_default", "tribike" },
	{ 0xB67597EC, "pandm_default", "tribike2" },
	{ 0xE823FB48, "pandm_default", "tribike3" },

	{ 0x63ABADE7, "sssa_default", "akuma" },
	{ 0xCFCA3668, "sssa_default", "baller2" },
	{ 0xF9300CC5, "sssa_default", "bati" },
	{ 0xCADD5D2D, "sssa_default", "bati2" },
	{ 0x432AA566, "sssa_default", "bfinject" },
	{ 0xEB298297, "sssa_default", "bifta" },
	{ 0xFEFD644F, "sssa_default", "bison" },
	{ 0x8125BCF9, "sssa_default", "blazer" },
	{ 0xAA699BB6, "sssa_default", "bodhi2" },
	{ 0x779F23AA, "sssa_default", "cavcade" },
	{ 0xBC993509, "sssa_default", "dilettan" },
	{ 0x9C669788, "sssa_default", "double" },
	{ 0x9CF21E0F, "sssa_default", "dune" },
	{ 0x0350D1AB, "sssa_default", "faggio" },
	{ 0xE8A8BDA8, "sssa_default", "felon" },
	{ 0xFAAD85EE, "sssa_default", "felon2" },
	{ 0x71CB2FFB, "sssa_default", "fugitive" },
	{ 0x94B395C5, "sssa_default", "gauntlet" },
	{ 0x11F76C14, "sssa_default", "hexer" },
	{ 0x18F25AC7, "sssa_default", "infernus" },
	{ 0xB9CB3B69, "sssa_default", "issi2" },
	{ 0x05852838, "sssa_default", "kalahari" },
	{ 0x506434F6, "sssa_default", "oracle" },
	{ 0x58B3979C, "sssa_default", "paradise" },
	{ 0xC9CEAF06, "sssa_default", "pcj" },
	{ 0xB802DD46, "sssa_default", "rebel" },
	{ 0x7F5C91F1, "sssa_default", "rocoto" },
	{ 0xCABD11E8, "sssa_default", "ruffian" },
	{ 0xDC434E51, "sssa_default", "sadler" },
	{ 0x2EF89E46, "sssa_default", "sanchez" },
	{ 0xA960B13E, "sssa_default", "sanchez2" },
	{ 0xB9210FD0, "sssa_default", "sandking" },
	{ 0x3AF8C345, "sssa_default", "sandkin2" },
	{ 0xD37B7976, "sssa_default", "schwarze" },
	{ 0x8B13F083, "sssa_default", "stretch" },
	{ 0x42F2ED16, "lgm_default", "superd" },
	{ 0x16E478C1, "lgm_default", "surano_convertable" },
	{ 0x142E0DC3, "lgm_default", "vacca" },
	{ 0xF79A00F7, "sssa_default", "vader" },
	{ 0xCEC6B9B7, "sssa_default", "vigero" },
	{ 0xBD1B39C3, "sssa_default", "zion" },
	{ 0xB8E2AE18, "sssa_default", "zion2" },

	{ 0x94204D89, "sssa_dlc_business", "asea" },
	{ 0x8E9254FB, "sssa_dlc_business", "astrope" },
	{ 0x3FC5D440, "sssa_dlc_business", "bobcatxl" },
	{ 0xD0EB2BE5, "sssa_dlc_business", "cavcade2" },
	{ 0xB3206692, "sssa_dlc_business", "ingot" },
	{ 0x34DD8AA1, "sssa_dlc_business", "intruder" },
	{ 0xED7EADA4, "sssa_dlc_business", "minivan" },
	{ 0x8FB66F9B, "sssa_dlc_business", "premier" },
	{ 0x9D96B45B, "sssa_dlc_business", "radi" },
	{ 0x6210CBB0, "sssa_dlc_business", "rancherx" },
	{ 0xA7EDE74D, "sssa_dlc_business", "stanier" },
	{ 0x66B4FC45, "sssa_dlc_business", "stratum" },
	{ 0x69F06B57, "sssa_dlc_business", "washingt" },
	{ 0x04CE68AC, "sssa_dlc_business2", "dominato" },
	{ 0xDCBCBE48, "sssa_dlc_business2", "f620" },
	{ 0x1DC0BA53, "sssa_dlc_business2", "fusilade" },
	{ 0xE9805550, "sssa_dlc_business2", "penumbra" },
	{ 0x50732C82, "sssa_dlc_business2", "sentinel" },

	{ 0xBE0E6126, "sssa_dlc_christmas_2", "jester2" },
	{ 0xDA5819A3, "sssa_dlc_christmas_2", "massacro2" },
	{ 0xDCE1D9F7, "sssa_dlc_christmas_2", "rloader2" },
	{ 0x2B7F9DE3, "sssa_dlc_christmas_2", "slamvan" },

	{ 0x6882FA73, "sssa_dlc_heist", "enduro" },
	{ 0x11AA0E14, "sssa_dlc_heist", "gburrito2" },
	{ 0xA3FC0F4D, "sssa_dlc_heist", "gresley" },
	{ 0xDAC67112, "sssa_dlc_heist", "jackal" },
	{ 0xAE2BFE94, "sssa_dlc_heist", "kuruma" },
	{ 0x187D938D, "sssa_dlc_heist", "kuruma2" },
	{ 0x4BA4E8DC, "sssa_dlc_heist", "landstalker" },
	{ 0x4543B74D, "sssa_dlc_heist", "rumpo" },
	{ 0xB52B5113, "sssa_dlc_heist", "schafter2" },
	{ 0x48CECED3, "sssa_dlc_heist", "seminole" },
	{ 0x8F0E3594, "sssa_dlc_heist", "surge" },

	{ 0xB820ED5E, "sssa_dlc_hipster", "blade" },
	{ 0xB44F0582, "sssa_dlc_hipster", "blazer3" },
	{ 0xEDD516C6, "sssa_dlc_hipster", "buffalo" },
	{ 0x2BEC3CBE, "sssa_dlc_hipster", "buffalo2" },
	{ 0x047A6BC1, "sssa_dlc_hipster", "glendale" },
	{ 0xE644E480, "sssa_dlc_hipster", "panto" },
	{ 0x59E0FBF3, "sssa_dlc_hipster", "picador" },
	{ 0x404B6381, "sssa_dlc_hipster", "pigalle" },
	{ 0xBB6B404F, "sssa_dlc_hipster", "primo" },
	{ 0x8612B64B, "sssa_dlc_hipster", "rebel2" },
	{ 0xFF22D208, "sssa_dlc_hipster", "regina" },
	{ 0x322CF98F, "sssa_dlc_hipster", "rhapsody" },
	{ 0x29B0DA97, "sssa_dlc_hipster", "surfer" },
	{ 0xC3DDFDCE, "sssa_dlc_hipster", "tailgater" },
	{ 0x51D83328, "sssa_dlc_hipster", "warrener" },
	{ 0x03E5F6B8, "sssa_dlc_hipster", "youga" },

	{ 0x2C509634, "sssa_dlc_independence", "sovereign" },

	{ 0x4B6C568A, "sssa_dlc_lts_creator", "hakuchou" },
	{ 0xF683EACA, "sssa_dlc_lts_creator", "innovation" },

	{ 0x3DEE5EDA, "sssa_dlc_mp_to_sp", "blista2" },
	{ 0xE2C013E, "sssa_dlc_mp_to_sp", "buffalo3" },
	{ 0xC96B73D9, "sssa_dlc_mp_to_sp", "dominator2" },
	{ 0x14D22159, "sssa_dlc_mp_to_sp", "gauntlet2" },
	{ 0x72A4C31E, "sssa_dlc_mp_to_sp", "stallion" },
	{ 0xE80F67EE, "sssa_dlc_mp_to_sp", "stalion2" },

	{ 0xD83C13CE, "sssa_dlc_valentines", "rloader" },
	{ 0x06FF6914, "lgm_dlc_valentines", "roosevelt" },

	{ 0x3822BDFE, "lgm_dlc_heist", "casco" },
	{ 0x26321E67, "lgm_dlc_heist", "lectro" },

	{ 0xC397F748, "lsc_default", "buccaneer2_b" },
	{ 0xD756460C, "lsc_default", "buccaneer2" },
	{ 0xAED64A63, "lsc_default", "chino2_b" },
	{ 0x14D69010, "lsc_default", "chino2" },
	{ 0x81A9CDDF, "lsc_default", "faction2_a" },
	{ 0x95466BDB, "lsc_default", "faction2_b" },
	{ 0x1F52A43F, "lsc_default", "moonbeam2_a" },
	{ 0x710A2B9B, "lsc_default", "moonbeam2_b" },
	{ 0xBB6B404F, "lsc_default", "primo2_a" },
	{ 0x86618EDA, "lsc_default", "primo2_b" },
	{ 0x1F3766E3, "lsc_default", "voodoo_a" },
	{ 0x779B4F2D, "lsc_default", "voodoo_b" },

	{ 0xCE6B35A4, "sssa_dlc_halloween", "btype2" },
	{ 0x7B47A6A7, "sssa_dlc_halloween", "lurcher" },

	{ 0x2A54C47D, "elt_dlc_apartments", "svolito" },
	{ 0x9C5E5644, "elt_dlc_apartments", "svolito2" },
	{ 0xF92AEC4D, "candc_apartments", "limo2" },
	{ 0x6FF0F727, "lgm_dlc_apartments", "baller3" },
	{ 0x25CBE2E2, "lgm_dlc_apartments", "baller4" },
	{ 0x360A438E, "lgm_dlc_apartments", "cog55" },
	{ 0x86FE0B60, "lgm_dlc_apartments", "cognosc" },
	{ 0xDBF2D57A, "lgm_dlc_apartments", "cognosc" },
	{ 0x9CFFFC56, "lgm_dlc_apartments", "mamba" },
	{ 0x8C2BD0DC, "lgm_dlc_apartments", "niteshad" },
	{ 0xA774B5A6, "lgm_dlc_apartments", "schafter3" },
	{ 0x58CF185C, "lgm_dlc_apartments", "schafter4" },
	{ 0x41B77FA4, "lgm_dlc_apartments", "verlier" },
	{ 0x39F9C898, "sssa_dlc_christmas_3", "tampa" },

	{ 0x25C5AF13, "lsc_jan2016", "banshee2" },
	{ 0xEE6024BC, "lsc_jan2016", "sultan2" },
	{ 0xDC19D101, "lgm_dlc_valentines2", "roosevelt2" },

	{ 0x866BCE26, "lsc_lowrider2", "faction3_b" },
	{ 0xBCDE91F0, "lsc_lowrider2", "minivan2_b" },
	{ 0x9B909C94, "lsc_lowrider2", "sabregt2_a" },
	{ 0x0D4EA603, "lsc_lowrider2", "sabregt2_b" },
	{ 0x42BC5E19, "lsc_lowrider2", "slamvan3_b" },
	{ 0x1BB290BC, "lsc_lowrider2", "tornado5_a" },
	{ 0x94DA98EF, "lsc_lowrider2", "tornado5_b" },
	{ 0xCA62927A, "lsc_lowrider2", "virgo2_b" },

	{ 0x4BFCF28B, "lgm_dlc_executive1", "bestiagts" },
	{ 0x5502626C, "lgm_dlc_executive1", "fmj" },
	{ 0x92EF6E04, "lgm_dlc_executive1", "pfister811" },
	{ 0x7E8F677F, "lgm_dlc_executive1", "prototipo" },
	{ 0x0DF381E5, "lgm_dlc_executive1", "reaper" },
	{ 0x97398A4B, "lgm_dlc_executive1", "seven70" },
	{ 0x8CF5CAE1, "lgm_dlc_executive1", "windsor2" },
	{ 0x47BBCF2E, "lgm_dlc_executive1", "xls" },
	{ 0xE6401328, "lgm_dlc_executive1", "xls" },
	{ 0x57F682AF, "sssa_dlc_executive_1", "rumpo3" },
	{ 0xEDC6F847, "candc_executive1", "brickade" },
	{ 0x60A7EA10, "candc_executive1", "cargobob2" },
	{ 0xB2CF7250, "elt_dlc_executive1", "nimbus" },
	{ 0x920016F1, "elt_dlc_executive1", "volatus" },
	{ 0x82CAC433, "dock_dlc_executive1", "tug" },

	{ 0xB6846A55, "lgm_dlc_stunt", "le7b" },
	{ 0x1CBDC10B, "lgm_dlc_stunt", "lynx" },
	{ 0x30D3F6D8, "lgm_dlc_stunt", "sheava" },
	{ 0x7B406EFB, "lgm_dlc_stunt", "tyrus" },
	{ 0x05283265, "sssa_dlc_stunt", "bf400" },
	{ 0x5C55CB39, "sssa_dlc_stunt", "brioso" },
	{ 0x17420102, "sssa_dlc_stunt", "cliffhanger" },
	{ 0x28B67ACA, "sssa_dlc_stunt", "contender" },
	{ 0x2C2C2324, "sssa_dlc_stunt", "gargoyle" },
	{ 0xD1AD4937, "sssa_dlc_stunt", "omnis" },
	{ 0x829A3C44, "sssa_dlc_stunt", "rallytruck" },
	{ 0xC0240885, "sssa_dlc_stunt", "tampa2" },
	{ 0x5728D321, "sssa_dlc_stunt", "trophy" },
	{ 0x3335A165, "sssa_dlc_stunt", "trophy2" },
	{ 0x707E63A4, "sssa_dlc_stunt", "tropos" },

	{ 0xF0C2A91F, "lgm_dlc_biker", "hakuchou2" },
	{ 0xD7C56D39, "lgm_dlc_biker", "raptor" },
	{ 0xE7D2A16E, "lgm_dlc_biker", "shotaro" },
	{ 0x81E38F7F, "sssa_dlc_biker", "avarus" },
	{ 0x806B9CC3, "sssa_dlc_biker", "bagger" },
	{ 0xE5BA6858, "sssa_dlc_biker", "blazer4" },
	{ 0x00675ED7, "sssa_dlc_biker", "chimera" },
	{ 0xAC4E93C9, "sssa_dlc_biker", "daemon2" },
	{ 0x30FF0190, "sssa_dlc_biker", "defiler" },
	{ 0x794CB30C, "sssa_dlc_biker", "esskey" },
	{ 0xB328B188, "sssa_dlc_biker", "faggio3" },
	{ 0x7F384994, "sssa_dlc_biker", "faggion" },
	{ 0xA5325278, "sssa_dlc_biker", "manchez" },
	{ 0xA0438767, "sssa_dlc_biker", "nightblade" },
	{ 0x6FACDF31, "sssa_dlc_biker", "ratbike" },
	{ 0x58E316C7, "sssa_dlc_biker", "sanctus" },
	{ 0xA31CB573, "sssa_dlc_biker", "tornado6" },
	{ 0xDBA9DBFC, "sssa_dlc_biker", "vortex" },
	{ 0xDB20A373, "sssa_dlc_biker", "wolfsbane" },
	{ 0x3D29CD2B, "sssa_dlc_biker", "youga2" },
	{ 0xC3D7C72B, "sssa_dlc_biker", "zombiea" },
	{ 0xDE05FB87, "sssa_dlc_biker", "zombieb" },

	{ 0xA1355F67, "candc_importexport", "blazer5" },
	{ 0x28AD20E1, "candc_importexport", "boxville5" },
	{ 0xED62BFA9, "candc_importexport", "dune5" },
	{ 0x9DAE1398, "candc_importexport", "phantom2" },
	{ 0x381E10BD, "candc_importexport", "ruiner2" },
	{ 0x4662BCBB, "candc_importexport", "technical2" },
	{ 0x3AF76F4A, "candc_importexport", "voltic2" },
	{ 0x8E08EC82, "candc_importexport", "wastlndr" },
	{ 0x9734F3EA, "lgm_dlc_importexport", "penetrator" },
	{ 0x1044926F, "lgm_dlc_importexport", "tempesta" },
	{ 0x877358AD, "lsc_dlc_import_export", "comet3_b" },
	{ 0xF1B44F44, "lsc_dlc_import_export", "diablous2_a" },
	{ 0x6ABDF65E, "lsc_dlc_import_export", "diablous2_b" },
	{ 0x0BBA2261, "lsc_dlc_import_export", "elegy_b" },
	{ 0x25676EAF, "lsc_dlc_import_export", "fcr2_a" },
	{ 0xD2D5E00E, "lsc_dlc_import_export", "fcr2_b" },
	{ 0x85E8E76B, "lsc_dlc_import_export", "italigtb2_a" },
	{ 0xE33A477B, "lsc_dlc_import_export", "italigtb2_b" },
	{ 0x3DA47243, "lsc_dlc_import_export", "nero2_a" },
	{ 0x4131F378, "lsc_dlc_import_export", "nero2_b" },
	{ 0x706E2B40, "lsc_dlc_import_export", "specter2_a" },
	{ 0x400F5147, "lsc_dlc_import_export", "specter2_b" },

	{ 0x4992196C, "lgm_dlc_specialraces", "gp1" },
	{ 0xAC33179C, "lgm_dlc_specialraces", "infernus2" },
	{ 0x2AE524A8, "lgm_dlc_specialraces", "ruston" },
	{ 0xC575DF11, "lgm_dlc_specialraces", "turismo2" },

	{ 0x2189D250, "candc_gunrunning", "apc" },
	{ 0x097E5533, "candc_gunrunning", "ardent" },
	{ 0xD227BDBB, "foreclosures_bunker", "transportation_1" },
	{ 0x0D4E5F4D, "lgm_dlc_gunrunning", "cheetah2" },
	{ 0x711D4738, "candc_gunrunning", "dune3" },
	{ 0xFE141DA6, "candc_gunrunning", "halftrack" },
	{ 0x171C92C4, "candc_truck", "cab_1" },
	{ 0x19DD9ED1, "candc_gunrunning", "nightshark" },
	{ 0x34B82784, "candc_gunrunning", "oppressor" },
	{ 0xB7D9F7F1, "candc_gunrunning", "tampa3" },
	{ 0x59A9E570, "lgm_dlc_gunrunning", "torero" },
	{ 0x8FD54EBB, "candc_gunrunning", "trsmall2" },
	{ 0x7397224C, "lgm_dlc_gunrunning", "vagner" },
	{ 0x36B4A8A9, "lgm_dlc_gunrunning", "xa21" },

	{ 0xFE0A508C , "candc_smuggler", "bombushka" },
	{ 0xFD707EDE , "candc_smuggler", "hunter" },
	{ 0xD35698EF , "candc_smuggler", "mogul" },
	{ 0x3DC92356 , "candc_smuggler", "nokota" },
	{ 0xAD6065C0 , "candc_smuggler", "pyro" },
	{ 0xC5DD6967 , "candc_smuggler", "rogue" },
	{ 0x9A9EB7DE , "candc_smuggler", "starling" },
	{ 0x3E2E4F8A , "candc_smuggler", "tula" },
	{ 0xB5EF4C33 , "candc_smuggler", "vigilante" },

	{ 0x8198AEDC, "lgm_dlc_assault", "entity2" },
	{ 0xB4F32118, "lgm_dlc_assault", "flashgt" },
	{ 0x71CBEA98, "lgm_dlc_assault", "gb200" },
	{ 0xF330CB6A, "lgm_dlc_assault", "jester3" },
	{ 0xBC5DC07E, "lgm_dlc_assault", "taipan" },
	{ 0x3D7C6410, "lgm_dlc_assault", "tezeract" },
	{ 0xE99011C2, "lgm_dlc_assault", "tyrant" },

	{ 0x6DBD6C0A , "sssa_dlc_smuggler", "retinue" },
	{ 0x52FF9437 , "lgm_dlc_smuggler", "cyclone" },
	{ 0x7A2EF5E4 , "lgm_dlc_smuggler", "rapidgt3" },
	{ 0xC4810400 , "lgm_dlc_smuggler", "visione" },
	{ 0xA52F6866 , "elt_dlc_smuggler", "alphaz1" },
	{ 0x89BA59F5 , "elt_dlc_smuggler", "havok" },
	{ 0xC3F25753 , "elt_dlc_smuggler", "howard" },
	{ 0x96E24857 , "elt_dlc_smuggler", "microlight" },
	{ 0xE8983F9F , "elt_dlc_smuggler", "seabreeze" },
	{ 0x5D56F01B , "candc_smuggler", "molotok" },

	{ 0x46699F47 , "candc_xmas2017", "akula" },
	{ 0xF34DFB25 , "candc_xmas2017", "barrage" },
	{ 0x81BD2ED0 , "candc_chopper", "banner_4" },
	{ 0x18606535 , "candc_chopper", "banner_0" },
	{ 0xD6BC7523 , "candc_xmas2017", "chernobog" },
	{ 0x586765FB , "candc_xmas2017", "deluxo" },
	{ 0xAA6F980A , "candc_xmas2017", "khanjali" },
	{ 0x9B16A3B4 , "candc_xmas2017", "riot2" },
	{ 0x34DBA661 , "candc_xmas2017", "stromberg" },
	{ 0x58CDAF30 , "candc_xmas2017", "thruster" },
	{ 0x1AAD0DED , "candc_xmas2017", "volatol" },
	{ 0xED552C74 , "lgm_dlc_xmas2017", "autarch" },
	{ 0x5D1903F9 , "lgm_dlc_xmas2017", "comet4" },
	{ 0x276D98A3 , "lgm_dlc_xmas2017", "comet5" },
	{ 0x8408F33A , "lgm_dlc_xmas2017", "gt500" },
	{ 0x23CA25F2 , "lgm_dlc_xmas2017", "hustler" },
	{ 0x91CA96EE , "lgm_dlc_xmas2017", "neon" },
	{ 0x33B98FE2 , "lgm_dlc_xmas2017", "pariah" },
	{ 0xA4D99B7D , "lgm_dlc_xmas2017", "raiden" },
	{ 0xE78CC3D9 , "lgm_dlc_xmas2017", "revolter" },
	{ 0x35DED0DD , "lgm_dlc_xmas2017", "savestra" },
	{ 0x5097F589 , "lgm_dlc_xmas2017", "sc1" },
	{ 0x67D2B389 , "lgm_dlc_xmas2017", "streiter" },
	{ 0xE8A8BA94 , "lgm_dlc_xmas2017", "viseris" },
	{ 0x3201DD49 , "lgm_dlc_xmas2017", "z190" },
	{ 0x00E83C17 , "sssa_dlc_xmas2017", "hermes" },
	{ 0xF8C2E0E7 , "sssa_dlc_xmas2017", "kamacho" },
	{ 0xA4A4E453 , "sssa_dlc_xmas2017", "riata" },
	{ 0x41D149AA , "sssa_dlc_xmas2017", "sentinel3" },
	{ 0x67D2B389 , "sssa_dlc_xmas2017", "streiter" },
	{ 0x6F946279 , "sssa_dlc_xmas2017", "yosemite" },

	{ 0x4ABEBF23, "candc_assault", "caracara" },
	{ 0xD4AE63D9, "elt_dlc_assault", "sparrow" },
	{ 0xC514AAE0, "sssa_dlc_assault", "cheburek" },
	{ 0xC52C6B93, "sssa_dlc_assault", "dominator3" },
	{ 0xB472D2B5, "sssa_dlc_assault", "ellie" },
	{ 0x6068AD86, "sssa_dlc_assault", "fagaloa" },
	{ 0x378236E1, "sssa_dlc_assault", "issi3" },
	{ 0x3E5BD8D9, "sssa_dlc_assault", "michelli" },
	{ 0x42836BE5, "sssa_dlc_assault", "hotring" },

	///////////////////// Extra
	{ 0x2b26f456, "sssa_dlc_mp_to_sp", "dukes" },
	{ 0xdcbc1c3b, "sssa_dlc_mp_to_sp", "blista2" },
	{ 0x14d69010, "lsc_default", "chino2_a" },

	////////////////////
	{ 0x50D4D19F, "candc_default", "insurgent" },
	{ 0xA90ED5C, "candc_truck", "cab_0" },
	{ 0x8D4B7A8A, "candc_default", "technical" },

	//////////////////
	{ 0x612f4b6, "sssa_dlc_stunt", "trophy" },
	{ 0xd876dbe2, "sssa_dlc_stunt", "trophy2" },

	////////////////////
	{ 0x33b47f96, "dock_default", "dinghy3" },
	{ 0xed762d49, "dock_default", "seashark" },
	{ 0x1a144f2a, "dock_default", "speeder" },
	{ 0x362cac6d, "dock_default", "toro" },
	{ 0x5bfa5c4b, "candc_default", "valkyrie" },
	{ 0x78bc1a3c, "candc_default", "cargobob" },

	///////////////
	{ 0x2592b5cf, "candc_default", "barracks" },
	{ 0x31adbbfc, "sssa_dlc_christmas_2", "slamvan" },
	{ 0x825a9f4c, "sssa_dlc_heist", "guardian" },
	/////////////
{ 0xEDA4ED97, "elt_dlc_battle", "blimp3" },
{ 0xFCC2F483, "lgm_dlc_battle", "freecrawler" },
{ 0x79DD18AE, "candc_battle", "menacer" },
{ 0x73F4110E, "candc_battle", "mule4" },
{ 0x7B54A9D3, "candc_battle", "oppressor2" },
{ 0xE6E967F8, "sssa_dlc_battle", "patriot2" },
{ 0x149BD32A, "sssa_dlc_battle", "pbus2" },
{ 0x6290F15B, "candc_battle", "pounder2" },
{ 0xD9F0503D, "candc_battle", "scramjet" },
//{ 0x0D17099D, "", "" }, //speedo4 (cant find)
{ 0x1324E960, "lgm_dlc_battle", "stafford" },
{ 0x64DE07A1, "candc_battle", "strikeforce" },
{ 0x1DD4C0FF, "lgm_dlc_battle", "swinger" },
{ 0x897AFC65, "candc_hacker", "banner0" },

/////////////ARENA
{ 0x0, "sssa_dlc_arena", "blista3" },
{ 0xEEF345EC, "sssa_dlc_arena", "rcbandito" },
{ 0x56D42971, "sssa_dlc_arena", "tulip" },
{ 0xA29F78B0, "lgm_dlc_arena", "clique" },
{ 0x5EE005DA, "lgm_dlc_arena", "deveste" },
{ 0x4C3FFF49, "lgm_dlc_arena", "deviant" },
{ 0xEC3E3404, "lgm_dlc_arena", "italigto" },
{ 0xE1C03AB0, "lgm_dlc_arena", "schlagen" },
{ 0xBA5334AC, "lgm_dlc_arena", "toros" },
{ 0x27D79225, "mba_vehicles", "bruiser_c_1" },
{ 0x9B065C9E, "mba_vehicles", "bruiser_c_2" },
{ 0x8644331A, "mba_vehicles", "bruiser_c_3" },
{ 0x7F81A829, "mba_vehicles", "brutus1" },
{ 0x8F49AE28, "mba_vehicles", "brutus2" },
{ 0x798682A2, "mba_vehicles", "brutus3" },
{ 0xD039510B, "mba_vehicles", "cerberus1" },
{ 0x287FA449, "mba_vehicles", "cerberus2" },
{ 0x71D3B6F0, "mba_vehicles", "cerberus3" },
{ 0xFE5F0722, "mba_vehicles", "deathbike_c_1" },
{ 0x93F09558, "mba_vehicles", "deathbike_c_2" },
{ 0xAE12C99C, "mba_vehicles", "deathbike_c_3" },
{ 0xD6FB0F30, "mba_vehicles", "dominato_c_1" },
{ 0xAE0A3D4F, "mba_vehicles", "dominato_c_2" },
{ 0xB2E046FB, "mba_vehicles", "dominato_c_3" },
{ 0x0, "mba_vehicles", "gargoyle" },
{ 0x83070B62, "mba_vehicles", "impaler_b" },
{ 0x3C26BD0C, "mba_vehicles", "impaler_c_1" },
{ 0x8D45DF49, "mba_vehicles", "impaler_c_2" },
{ 0x9804F4C7, "mba_vehicles", "impaler_c_3" },
{ 0x1A861243, "mba_vehicles", "imperator1" },
{ 0x619C1B82, "mba_vehicles", "imperator2" },
{ 0xD2F77E37, "mba_vehicles", "imperator3" },
{ 0x730CE01F, "mba_vehicles", "issi3_b" },
{ 0x256E92BA, "mba_vehicles", "issi3_c_1" },
{ 0x5BA0FF1E, "mba_vehicles", "issi3_c_2" },
{ 0x49E25BA1, "mba_vehicles", "issi3_c_3" },
{ 0x669EB40A, "mba_vehicles", "monster_c_1" },
{ 0x32174AFC, "mba_vehicles", "monster_c_2" },
{ 0xD556917C, "mba_vehicles", "monster_c_3" },
{ 0xBBA2A2F7, "mba_vehicles", "scarab1" },
{ 0x5BEB3CE0, "mba_vehicles", "scarab2" },
{ 0xDD71BFEB, "mba_vehicles", "scarab3" },
{ 0x8526E2F5, "mba_vehicles", "slamvan_c_1" },
{ 0x163F8520, "mba_vehicles", "slamvan_c_2" },
{ 0x67D52852, "mba_vehicles", "slamvan_c_3" },
{ 0x20314B42, "mba_vehicles", "zr3801" },
{ 0xBE11EFC6, "mba_vehicles", "zr3802" },
{ 0xA7DCC35C, "mba_vehicles", "zr3803" },

{ 0xCEB28249, "candc_importexport", "dune5" },
{ 0x1C09CF5E, "lgm_dlc_apartments", "baller3" },
{ 0x27B4E6B0, "lgm_dlc_apartments", "baller4" },
{ 0x86FE0B60, "lgm_dlc_apartments", "cognosc" },

{ 0xCB0E7CD9, "lgm_dlc_apartments", "schafter4" },
{ 0x72934BE4, "lgm_dlc_apartments", "schafter4" },

//CASINO DLC
{ 0xAF966F3C, "sssa_dlc_vinewood", "CARACARA2" },
{ 0x28EAB80F, "lgm_dlc_vinewood", "DRAFTER" },
{ 0x127E90D5, "sssa_dlc_vinewood", "DYNASTY" },
{ 0x4EE74355, "lgm_dlc_vinewood", "EMERUS" },
{ 0x2B0C4DCD, "sssa_dlc_vinewood", "GAUNTLET3" },
{ 0x734C5E50, "sssa_dlc_vinewood", "GAUNTLET4" },
{ 0xEA6A047F, "sssa_dlc_vinewood", "HELLION" },
{ 0x6E8DA4F7, "sssa_dlc_vinewood", "ISSI7" },
{ 0xF38C4245, "lgm_dlc_vinewood", "JUGULAR" },
{ 0xD86A0247, "lgm_dlc_vinewood", "KRIEGER" },
{ 0xC7E55211, "lgm_dlc_vinewood", "LOCUST" },
{ 0xCB642637, "sssa_dlc_vinewood", "NEBULA" },
{ 0x9F6ED5A2, "lgm_dlc_vinewood", "NEO" },
{ 0x92F5024E, "lgm_dlc_vinewood", "NOVAK" },
{ 0xE550775B, "lgm_dlc_vinewood", "PARAGON" },
{ 0x546D8EEE, "lgm_dlc_vinewood", "PARAGON" },
{ 0x9472CD24, "sssa_dlc_vinewood", "PEYOTE2" },
{ 0x36A167E0, "lgm_dlc_vinewood", "RROCKET" },
{ 0xECA6B6A3, "lgm_dlc_vinewood", "S80" },
{ 0x3E3D1F59, "lgm_dlc_vinewood", "THRAX" },
{ 0x6F039A67, "sssa_dlc_vinewood", "ZION3" },
{ 0xD757D97D, "lgm_dlc_vinewood", "ZORRUSSO" }
	};
}