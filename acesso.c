#include <stdio.h>
#include <stdlib.h>
#include "acesso.h"

signed char LoadAudio(audio_t aud)
{
    fread(aud.ChunkID, sizeof(char), 4, stdin);
/*    fread(&aud.ChunkSize, sizeof(int), 1, stdin);
    fread(aud.Format, 3 * sizeof(char), 1, stdin);
    fread(aud.SubChunk1ID, 4 * sizeof(char), 1, stdin);
    fread(&aud.SubChunk1Size, sizeof(int), 1, stdin);
    fread(&aud.AudioFormat, sizeof(short), 1, stdin);
    fread(&aud.ChannelNr, sizeof(short), 1, stdin);
    fread(&aud.SampleRate, sizeof(int), 1, stdin);
    fread(&aud.ByteRate, sizeof(int), 1, stdin);
    fread(&aud.BlockAlign, sizeof(short), 1, stdin);
    fread(&aud.BitsPerSample, sizeof(short), 1, stdin);
    fread(aud.SubChunk2ID, 4 * sizeof(char), 1, stdin);
    fread(&aud.SubChunk2Size, sizeof(int), 1, stdin);

    aud.Data = malloc(aud.ChannelNr * sizeof(int*));
    for (unsigned int k = 0; k < aud.ChannelNr; k++)
        aud.Data[k] = malloc(aud.SubChunk2Size);

    for (unsigned int j = 0; j < aud.SubChunk2Size / sizeof(int); j++)
        for (unsigned int i = 0; i < aud.ChannelNr; i++)
            fread(&aud.Data[i][j], sizeof(int), 1, stdin);

    aud.ChunkID[4] = aud.Format[3] = aud.SubChunk1ID[4] = aud.SubChunk2ID[4] = 0;
*/
    aud.ChunkID[4] = 0;
    return 1;
}