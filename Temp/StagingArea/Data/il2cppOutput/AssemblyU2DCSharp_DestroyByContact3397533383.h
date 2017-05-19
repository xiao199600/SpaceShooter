#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameController
struct GameController_t3607102586;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByContact
struct  DestroyByContact_t3397533383  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DestroyByContact::explosion
	GameObject_t1756533147 * ___explosion_2;
	// UnityEngine.GameObject DestroyByContact::playerExplosion
	GameObject_t1756533147 * ___playerExplosion_3;
	// GameController DestroyByContact::gameController
	GameController_t3607102586 * ___gameController_4;
	// System.Int32 DestroyByContact::scoreValue
	int32_t ___scoreValue_5;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_playerExplosion_3() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___playerExplosion_3)); }
	inline GameObject_t1756533147 * get_playerExplosion_3() const { return ___playerExplosion_3; }
	inline GameObject_t1756533147 ** get_address_of_playerExplosion_3() { return &___playerExplosion_3; }
	inline void set_playerExplosion_3(GameObject_t1756533147 * value)
	{
		___playerExplosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerExplosion_3, value);
	}

	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___gameController_4)); }
	inline GameController_t3607102586 * get_gameController_4() const { return ___gameController_4; }
	inline GameController_t3607102586 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(GameController_t3607102586 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_4, value);
	}

	inline static int32_t get_offset_of_scoreValue_5() { return static_cast<int32_t>(offsetof(DestroyByContact_t3397533383, ___scoreValue_5)); }
	inline int32_t get_scoreValue_5() const { return ___scoreValue_5; }
	inline int32_t* get_address_of_scoreValue_5() { return &___scoreValue_5; }
	inline void set_scoreValue_5(int32_t value)
	{
		___scoreValue_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
