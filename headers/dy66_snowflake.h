

union DISCORD_SNOWFLAKE
{
  unsigned long int value;
  struct DISCORD_SNOWFLAKE_ELEMENTS {
   unsigned int process_snowflake_id:12;
   unsigned int process_id:5;
   unsigned int worker_id:5;
   unsigned int discord_timestamp:54;
   } elements;
 };
