/**
 * @file  CorrectPlayerMovePredictionPacket.hpp
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
 * @brief MC class CorrectPlayerMovePredictionPacket.
 *
 */
class CorrectPlayerMovePredictionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORRECTPLAYERMOVEPREDICTIONPACKET
public:
    class CorrectPlayerMovePredictionPacket& operator=(class CorrectPlayerMovePredictionPacket const &) = delete;
    CorrectPlayerMovePredictionPacket(class CorrectPlayerMovePredictionPacket const &) = delete;
    CorrectPlayerMovePredictionPacket() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CorrectPlayerMovePredictionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CorrectPlayerMovePredictionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CorrectPlayerMovePredictionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@CorrectPlayerMovePredictionPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORRECTPLAYERMOVEPREDICTIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CorrectPlayerMovePredictionPacket();
#endif

};
