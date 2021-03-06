#include "z_en_part.h"

#define FLAGS 0x00000010

#define THIS ((EnPart*)thisx)

void EnPart_Init(Actor* thisx, GlobalContext* globalCtx);
void EnPart_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnPart_Update(Actor* thisx, GlobalContext* globalCtx);
void EnPart_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Part_InitVars = {
    ACTOR_EN_PART,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnPart),
    (ActorFunc)EnPart_Init,
    (ActorFunc)EnPart_Destroy,
    (ActorFunc)EnPart_Update,
    (ActorFunc)EnPart_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Part_0x80865370/EnPart_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Part_0x80865370/EnPart_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Part_0x80865370/func_80865390.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Part_0x80865370/func_808654C4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Part_0x80865370/EnPart_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Part_0x80865370/EnPart_Draw.asm")
