#include "z_en_scopecrow.h"

#define FLAGS 0x00000030

#define THIS ((EnScopecrow*)thisx)

void EnScopecrow_Init(Actor* thisx, GlobalContext* globalCtx);
void EnScopecrow_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnScopecrow_Update(Actor* thisx, GlobalContext* globalCtx);
void EnScopecrow_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Scopecrow_InitVars = {
    ACTOR_EN_SCOPECROW,
    ACTORTYPE_NPC,
    FLAGS,
    OBJECT_CROW,
    sizeof(EnScopecrow),
    (ActorFunc)EnScopecrow_Init,
    (ActorFunc)EnScopecrow_Destroy,
    (ActorFunc)EnScopecrow_Update,
    (ActorFunc)EnScopecrow_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD000.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD09C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD1AC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD2BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD334.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD4D0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD590.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/func_80BCD640.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/EnScopecrow_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/EnScopecrow_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/EnScopecrow_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Scopecrow_0x80BCD000/EnScopecrow_Draw.asm")
