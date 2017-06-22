class CfgPatches
{
	class 111_WEAPONS
	{
		addonRootClass = "A3_Weapons_F_Mark";
		requiredAddons[] = {"A3_Weapons_F_Mark","rhsusf_c_weapons"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"KRS_M14_TAN","KRS_M14_WOOD","KRS_M14_TAN_CAMO","srifle_LRR_F","111SOG_EBR_black_F","111SOG_EBR_DE_F"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class srifle_EBR_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	//Base Rifles
	class DMR_06_base_F: Rifle_Long_Base_F //M14
	{
	};
	class LRR_base_F: Rifle_Long_Base_F //LRR
	{
		class WeaponSlotsInfo;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1.0,1,300};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1.0,1,300};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1.0,1,300};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1.0,1,300};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1.0,1,300};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
		};
	};

	//-----------------------------------------------M14-----------------------------------------------//
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		scope = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","rhsusf_acc_rotex5_tan"};
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
			};
		};
	};
	class KRS_M14_TAN: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "M14 (Tan)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\M14_Tan_co.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\dmr_06_02_camo_co.paa"};
	};
	class KRS_M14_TAN_CAMO: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "M14 (Tan Camo)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\M14_Tan_Camo_co.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\dmr_06_02_camo_co.paa"};
	};
	class KRS_M14_WOOD: srifle_DMR_06_camo_F
	{
		author = "Krossin";
		scope = 2;
		displayName = "M14 (Wood)";
		picture = "\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_olive_X_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\Data\M14_wood_co.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
	};
	//------------------------------------------408----------------------------------------//
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_93mmg","muzzle_snds_93mmg_tan"};
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
			};
		};
	};
	//-----------------------------------------EBR------------------------------------------//
	class 111SOG_EBR_black_F: srifle_EBR_F
	{
		author = "Shrike";
		baseWeapon = "111SOG_EBR_black_F";
		displayName = "Mk14 EBR 7.62 mm (Black)";
		scope = 2;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\ebr01_black_co.paa","\111_SOG_WEAPONS\data\ebr02_black_co.paa"};
		hiddenSelectionsMaterials[] = {"\111_SOG_WEAPONS\data\m14_ebr01.rvmat","\111_SOG_WEAPONS\data\m14_ebr02.rvmat"};
	};
	class 111SOG_EBR_DE_F: srifle_EBR_F
	{
		author = "Shrike";
		baseWeapon = "111SOG_EBR_AOR1_F";
		displayName = "Mk14 EBR 7.62 mm (DE)";
		scope = 2;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\111_SOG_WEAPONS\data\ebr01_AOR1_co.paa","\111_SOG_WEAPONS\data\ebr02_AOR1_co.paa"};
		hiddenSelectionsMaterials[] = {"\111_SOG_WEAPONS\data\m14_ebr01.rvmat","\111_SOG_WEAPONS\data\m14_ebr02.rvmat"};
	};
};
