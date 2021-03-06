#include "z_en_egblock.h"

#define FLAGS 0x08000000

#define THIS ((EnEgblock*)thisx)

void EnEgblock_Init(Actor* thisx, GlobalContext* globalCtx);
void EnEgblock_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnEgblock_Update(Actor* thisx, GlobalContext* globalCtx);
void EnEgblock_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Egblock_InitVars = {
    ACTOR_EN_EGBLOCK,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_EG,
    sizeof(EnEgblock),
    (ActorFunc)EnEgblock_Init,
    (ActorFunc)EnEgblock_Destroy,
    (ActorFunc)EnEgblock_Update,
    (ActorFunc)EnEgblock_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/EnEgblock_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/EnEgblock_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/func_80ABA8A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/func_80ABA988.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/func_80ABA9B8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/EnEgblock_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/EnEgblock_Draw.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/func_80ABAAF4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/func_80ABACB4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Egblock_0x80ABA7A0/func_80ABAE64.asm")
