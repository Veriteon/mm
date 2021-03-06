#include "z_demo_tre_lgt.h"

#define FLAGS 0x00000010

#define THIS ((DemoTreLgt*)thisx)

void DemoTreLgt_Init(Actor* thisx, GlobalContext* globalCtx);
void DemoTreLgt_Destroy(Actor* thisx, GlobalContext* globalCtx);
void DemoTreLgt_Update(Actor* thisx, GlobalContext* globalCtx);
void DemoTreLgt_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Demo_Tre_Lgt_InitVars = {
    ACTOR_DEMO_TRE_LGT,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    OBJECT_BOX,
    sizeof(DemoTreLgt),
    (ActorFunc)DemoTreLgt_Init,
    (ActorFunc)DemoTreLgt_Destroy,
    (ActorFunc)DemoTreLgt_Update,
    (ActorFunc)DemoTreLgt_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/DemoTreLgt_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/DemoTreLgt_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/func_808E0EE8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/func_808E0EF4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/func_808E0F4C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/func_808E0FE0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/DemoTreLgt_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/func_808E12A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Demo_Tre_Lgt_0x808E0E40/DemoTreLgt_Draw.asm")
