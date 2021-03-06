#include "z_oceff_wipe7.h"

#define FLAGS 0x02000010

#define THIS ((OceffWipe7*)thisx)

void OceffWipe7_Init(Actor* thisx, GlobalContext* globalCtx);
void OceffWipe7_Destroy(Actor* thisx, GlobalContext* globalCtx);
void OceffWipe7_Update(Actor* thisx, GlobalContext* globalCtx);
void OceffWipe7_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Oceff_Wipe7_InitVars = {
    ACTOR_OCEFF_WIPE7,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(OceffWipe7),
    (ActorFunc)OceffWipe7_Init,
    (ActorFunc)OceffWipe7_Destroy,
    (ActorFunc)OceffWipe7_Update,
    (ActorFunc)OceffWipe7_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe7_0x80BCDCB0/OceffWipe7_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe7_0x80BCDCB0/OceffWipe7_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe7_0x80BCDCB0/OceffWipe7_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe7_0x80BCDCB0/OceffWipe7_Draw.asm")
