
namespace dy66dc
{

typedef union 
{
  unsigned long int value;
  struct DISCORD_SNOWFLAKE_ELEMENTS_LE {
   unsigned int process_snowflake_id:12;
   unsigned int process_id:5;
   unsigned int worker_id:5;
   unsigned int discord_timestamp:54;
   } elements_le;
  struct DISCORD_SNOWFLAKE_ELEMENTS_BE {
    unsigned int discord_timestamp:54;
    unsigned int worker_id:5;
    unsigned int process_id:5;
    unsigned int process_snowflake_id:12;
  } elements_be;
 } DISCORD_SNOWFLAKE;
}
