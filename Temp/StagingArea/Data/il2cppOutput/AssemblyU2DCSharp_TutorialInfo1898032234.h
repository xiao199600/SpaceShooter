#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialInfo
struct  TutorialInfo_t1898032234  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TutorialInfo::showAtStart
	bool ___showAtStart_2;
	// System.String TutorialInfo::url
	String_t* ___url_3;
	// UnityEngine.GameObject TutorialInfo::overlay
	GameObject_t1756533147 * ___overlay_4;
	// UnityEngine.UI.Toggle TutorialInfo::showAtStartToggle
	Toggle_t3976754468 * ___showAtStartToggle_5;

public:
	inline static int32_t get_offset_of_showAtStart_2() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___showAtStart_2)); }
	inline bool get_showAtStart_2() const { return ___showAtStart_2; }
	inline bool* get_address_of_showAtStart_2() { return &___showAtStart_2; }
	inline void set_showAtStart_2(bool value)
	{
		___showAtStart_2 = value;
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier(&___url_3, value);
	}

	inline static int32_t get_offset_of_overlay_4() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___overlay_4)); }
	inline GameObject_t1756533147 * get_overlay_4() const { return ___overlay_4; }
	inline GameObject_t1756533147 ** get_address_of_overlay_4() { return &___overlay_4; }
	inline void set_overlay_4(GameObject_t1756533147 * value)
	{
		___overlay_4 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_4, value);
	}

	inline static int32_t get_offset_of_showAtStartToggle_5() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234, ___showAtStartToggle_5)); }
	inline Toggle_t3976754468 * get_showAtStartToggle_5() const { return ___showAtStartToggle_5; }
	inline Toggle_t3976754468 ** get_address_of_showAtStartToggle_5() { return &___showAtStartToggle_5; }
	inline void set_showAtStartToggle_5(Toggle_t3976754468 * value)
	{
		___showAtStartToggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___showAtStartToggle_5, value);
	}
};

struct TutorialInfo_t1898032234_StaticFields
{
public:
	// System.String TutorialInfo::showAtStartPrefsKey
	String_t* ___showAtStartPrefsKey_6;

public:
	inline static int32_t get_offset_of_showAtStartPrefsKey_6() { return static_cast<int32_t>(offsetof(TutorialInfo_t1898032234_StaticFields, ___showAtStartPrefsKey_6)); }
	inline String_t* get_showAtStartPrefsKey_6() const { return ___showAtStartPrefsKey_6; }
	inline String_t** get_address_of_showAtStartPrefsKey_6() { return &___showAtStartPrefsKey_6; }
	inline void set_showAtStartPrefsKey_6(String_t* value)
	{
		___showAtStartPrefsKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___showAtStartPrefsKey_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
