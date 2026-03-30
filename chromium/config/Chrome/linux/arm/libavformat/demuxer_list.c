static const FFInputFormat * const demuxer_list[] = {
    &ff_aac_demuxer,
    &ff_flac_demuxer,
    &ff_matroska_demuxer,
    &ff_mov_demuxer,
    &ff_mp3_demuxer,
    &ff_ogg_demuxer,
    &ff_wav_demuxer,
#if CONFIG_ARKWEB_MEDIA
    &ff_avi_demuxer,
    &ff_flv_demuxer,
    &ff_live_flv_demuxer,
    &ff_mpegts_demuxer,
#endif
    NULL };
