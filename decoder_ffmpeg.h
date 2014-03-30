#ifndef DECODER_FFMPEG_H

#define DECODER_FFMPEG_H

#include "decoder.h"

class DecoderFFmpeg : public Decoder {
    private:
        class Private;
        Private *priv;
    public:
        DecoderFFmpeg();
        ~DecoderFFmpeg();
        int open(const char *filename);
        void close();
        int read(char *, int);
        int seek(double);
        int read_comments(); //TODO Not fully implemented.
        int duration();
        long bitrate();
        long current_bitrate();
        char *codec();
        char *codec_profile();
        bool isopen();
    protected:
};

#endif
