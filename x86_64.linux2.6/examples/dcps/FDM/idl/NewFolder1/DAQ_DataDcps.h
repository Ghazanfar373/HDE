//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: DAQ_DataDcps.h
//  Source: NewFolder1/DAQ_DataDcps.idl
//  Generated: Tue Dec 11 10:08:45 2012
//  OpenSplice V5.5.1OSS
//  
//******************************************************************
#ifndef _DAQ_DATADCPS_H_
#define _DAQ_DATADCPS_H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "DAQ_Data.h"
#include "dds_dcps_builtintopics.h"
#include "dds_builtinTopics.h"
#include "dds_dcps_interfaces.h"

namespace DAQ_Data
{
   struct DaqData;

   class DaqDataTypeSupportInterface;

   typedef DaqDataTypeSupportInterface * DaqDataTypeSupportInterface_ptr;
   typedef DDS_DCPSInterface_var < DaqDataTypeSupportInterface> DaqDataTypeSupportInterface_var;
   typedef DDS_DCPSInterface_out < DaqDataTypeSupportInterface> DaqDataTypeSupportInterface_out;


   class DaqDataDataWriter;

   typedef DaqDataDataWriter * DaqDataDataWriter_ptr;
   typedef DDS_DCPSInterface_var < DaqDataDataWriter> DaqDataDataWriter_var;
   typedef DDS_DCPSInterface_out < DaqDataDataWriter> DaqDataDataWriter_out;


   class DaqDataDataReader;

   typedef DaqDataDataReader * DaqDataDataReader_ptr;
   typedef DDS_DCPSInterface_var < DaqDataDataReader> DaqDataDataReader_var;
   typedef DDS_DCPSInterface_out < DaqDataDataReader> DaqDataDataReader_out;


   class DaqDataDataReaderView;

   typedef DaqDataDataReaderView * DaqDataDataReaderView_ptr;
   typedef DDS_DCPSInterface_var < DaqDataDataReaderView> DaqDataDataReaderView_var;
   typedef DDS_DCPSInterface_out < DaqDataDataReaderView> DaqDataDataReaderView_out;

   struct DaqDataSeq_uniq_ {};
   typedef DDS_DCPSUFLSeq < DaqData, struct DaqDataSeq_uniq_> DaqDataSeq;
   typedef DDS_DCPSSequence_var < DaqDataSeq> DaqDataSeq_var;
   typedef DDS_DCPSSequence_out < DaqDataSeq> DaqDataSeq_out;
   class DaqDataTypeSupportInterface
   :
      virtual public DDS::TypeSupport
   { 
   public:
      typedef DaqDataTypeSupportInterface_ptr _ptr_type;
      typedef DaqDataTypeSupportInterface_var _var_type;

      static DaqDataTypeSupportInterface_ptr _duplicate (DaqDataTypeSupportInterface_ptr obj);
      DDS::Boolean _local_is_a (const char * id);

      static DaqDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
      static DaqDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
      static DaqDataTypeSupportInterface_ptr _nil () { return 0; }
      static const char * _local_id;
      DaqDataTypeSupportInterface_ptr _this () { return this; }


   protected:
      DaqDataTypeSupportInterface () {};
      ~DaqDataTypeSupportInterface () {};
   private:
      DaqDataTypeSupportInterface (const DaqDataTypeSupportInterface &);
      DaqDataTypeSupportInterface & operator = (const DaqDataTypeSupportInterface &);
   };

   class DaqDataDataWriter
   :
      virtual public DDS::DataWriter
   { 
   public:
      typedef DaqDataDataWriter_ptr _ptr_type;
      typedef DaqDataDataWriter_var _var_type;

      static DaqDataDataWriter_ptr _duplicate (DaqDataDataWriter_ptr obj);
      DDS::Boolean _local_is_a (const char * id);

      static DaqDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
      static DaqDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
      static DaqDataDataWriter_ptr _nil () { return 0; }
      static const char * _local_id;
      DaqDataDataWriter_ptr _this () { return this; }

      virtual DDS::InstanceHandle_t register_instance (const DaqData& instance_data) = 0;
      virtual DDS::InstanceHandle_t register_instance_w_timestamp (const DaqData& instance_data, const DDS::Time_t& source_timestamp) = 0;
      virtual DDS::ReturnCode_t unregister_instance (const DaqData& instance_data, DDS::InstanceHandle_t handle) = 0;
      virtual DDS::ReturnCode_t unregister_instance_w_timestamp (const DaqData& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
      virtual DDS::ReturnCode_t write (const DaqData& instance_data, DDS::InstanceHandle_t handle) = 0;
      virtual DDS::ReturnCode_t write_w_timestamp (const DaqData& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
      virtual DDS::ReturnCode_t dispose (const DaqData& instance_data, DDS::InstanceHandle_t handle) = 0;
      virtual DDS::ReturnCode_t dispose_w_timestamp (const DaqData& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
      virtual DDS::ReturnCode_t writedispose (const DaqData& instance_data, DDS::InstanceHandle_t handle) = 0;
      virtual DDS::ReturnCode_t writedispose_w_timestamp (const DaqData& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
      virtual DDS::ReturnCode_t get_key_value (DaqData& key_holder, DDS::InstanceHandle_t handle) = 0;
      virtual DDS::InstanceHandle_t lookup_instance (const DaqData& instance_data) = 0;

   protected:
      DaqDataDataWriter () {};
      ~DaqDataDataWriter () {};
   private:
      DaqDataDataWriter (const DaqDataDataWriter &);
      DaqDataDataWriter & operator = (const DaqDataDataWriter &);
   };

   class DaqDataDataReader
   :
      virtual public DDS::DataReader
   { 
   public:
      typedef DaqDataDataReader_ptr _ptr_type;
      typedef DaqDataDataReader_var _var_type;

      static DaqDataDataReader_ptr _duplicate (DaqDataDataReader_ptr obj);
      DDS::Boolean _local_is_a (const char * id);

      static DaqDataDataReader_ptr _narrow (DDS::Object_ptr obj);
      static DaqDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
      static DaqDataDataReader_ptr _nil () { return 0; }
      static const char * _local_id;
      DaqDataDataReader_ptr _this () { return this; }

      virtual DDS::ReturnCode_t read (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t take (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t read_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t take_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t read_next_sample (DaqData& received_data, DDS::SampleInfo& sample_info) = 0;
      virtual DDS::ReturnCode_t take_next_sample (DaqData& received_data, DDS::SampleInfo& sample_info) = 0;
      virtual DDS::ReturnCode_t read_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t take_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t read_next_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t take_next_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t read_next_instance_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t take_next_instance_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t return_loan (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
      virtual DDS::ReturnCode_t get_key_value (DaqData& key_holder, DDS::InstanceHandle_t handle) = 0;
      virtual DDS::InstanceHandle_t lookup_instance (const DaqData& instance) = 0;

   protected:
      DaqDataDataReader () {};
      ~DaqDataDataReader () {};
   private:
      DaqDataDataReader (const DaqDataDataReader &);
      DaqDataDataReader & operator = (const DaqDataDataReader &);
   };

   class DaqDataDataReaderView
   :
      virtual public DDS::DataReaderView
   { 
   public:
      typedef DaqDataDataReaderView_ptr _ptr_type;
      typedef DaqDataDataReaderView_var _var_type;

      static DaqDataDataReaderView_ptr _duplicate (DaqDataDataReaderView_ptr obj);
      DDS::Boolean _local_is_a (const char * id);

      static DaqDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
      static DaqDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
      static DaqDataDataReaderView_ptr _nil () { return 0; }
      static const char * _local_id;
      DaqDataDataReaderView_ptr _this () { return this; }

      virtual DDS::ReturnCode_t read (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t take (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t read_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t take_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t read_next_sample (DaqData& received_data, DDS::SampleInfo& sample_info) = 0;
      virtual DDS::ReturnCode_t take_next_sample (DaqData& received_data, DDS::SampleInfo& sample_info) = 0;
      virtual DDS::ReturnCode_t read_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t take_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t read_next_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t take_next_instance (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
      virtual DDS::ReturnCode_t read_next_instance_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t take_next_instance_w_condition (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
      virtual DDS::ReturnCode_t return_loan (DaqDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
      virtual DDS::ReturnCode_t get_key_value (DaqData& key_holder, DDS::InstanceHandle_t handle) = 0;
      virtual DDS::InstanceHandle_t lookup_instance (const DaqData& instance) = 0;

   protected:
      DaqDataDataReaderView () {};
      ~DaqDataDataReaderView () {};
   private:
      DaqDataDataReaderView (const DaqDataDataReaderView &);
      DaqDataDataReaderView & operator = (const DaqDataDataReaderView &);
   };

}
template <>
DDS::BuiltinTopicKey_t_slice* DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::copy (DDS::BuiltinTopicKey_t_slice *to, const DDS::BuiltinTopicKey_t_slice* from);
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::free (DDS::BuiltinTopicKey_t_slice *ptr);




#endif 
