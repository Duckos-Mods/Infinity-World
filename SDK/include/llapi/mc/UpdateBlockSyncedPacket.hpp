/**
 * @file  UpdateBlockSyncedPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateBlockSyncedPacket.
 *
 */
class UpdateBlockSyncedPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEBLOCKSYNCEDPACKET
public:
    class UpdateBlockSyncedPacket& operator=(class UpdateBlockSyncedPacket const &) = delete;
    UpdateBlockSyncedPacket(class UpdateBlockSyncedPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateBlockSyncedPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@UpdateBlockSyncedPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateBlockSyncedPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@UpdateBlockSyncedPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEBLOCKSYNCEDPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateBlockSyncedPacket();
#endif
    /**
     * @symbol ??0UpdateBlockSyncedPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateBlockSyncedPacket();
    /**
     * @symbol ??0UpdateBlockSyncedPacket\@\@QEAA\@AEBVBlockPos\@\@IIEAEBUActorBlockSyncMessage\@\@\@Z
     */
    MCAPI UpdateBlockSyncedPacket(class BlockPos const &, unsigned int, unsigned int, unsigned char, struct ActorBlockSyncMessage const &);

};
