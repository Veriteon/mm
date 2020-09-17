#include "z_en_ge1.h"

#define FLAGS 0x00000009

#define THIS ((EnGe1*)thisx)

void EnGe1_Init(Actor* thisx, GlobalContext* globalCtx);
void EnGe1_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnGe1_Update(Actor* thisx, GlobalContext* globalCtx);
void EnGe1_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Ge1_InitVars = {
    ACTOR_EN_GE1,
    ACTORTYPE_NPC,
    FLAGS,
    OBJECT_GE1,
    sizeof(EnGe1),
    (ActorFunc)EnGe1_Init,
    (ActorFunc)EnGe1_Destroy,
    (ActorFunc)EnGe1_Update,
    (ActorFunc)EnGe1_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/EnGe1_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/EnGe1_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_809457EC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80945924.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80945A00.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80945A9C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80945B60.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80945C50.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80945CAC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80945CE4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/EnGe1_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80946190.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80946238.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/func_80946368.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ge1_0x80945650/EnGe1_Draw.asm")