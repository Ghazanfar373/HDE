#include "DAQ_DataDcps_impl.h"
#include "gapi.h"
#include "gapi_loanRegistry.h"
#include "DAQ_DataSplDcps.h"
#include "ccpp_DataReader_impl.h"
#include "ccpp_DataReaderView_impl.h"


extern c_bool
__DAQ_Data_DaqData__copyIn(
    c_base base,
    struct DAQ_Data::DaqData *from,
    struct _DAQ_Data_DaqData *to);

extern void
__DAQ_Data_DaqData__copyOut(
    void *_from,
    void *_to);

// DDS DAQ_Data::DaqData TypeSupportFactory Object Body

 DDS::DataWriter_ptr 
DAQ_Data::DaqDataTypeSupportFactory::create_datawriter (gapi_dataWriter handle)
{
    return new DAQ_Data::DaqDataDataWriter_impl(handle);
}

 DDS::DataReader_ptr 
DAQ_Data::DaqDataTypeSupportFactory::create_datareader (gapi_dataReader handle)
{
    return new DAQ_Data::DaqDataDataReader_impl (handle);
}


 DDS::DataReaderView_ptr 
DAQ_Data::DaqDataTypeSupportFactory::create_view (gapi_dataReaderView handle)
{
    return new DAQ_Data::DaqDataDataReaderView_impl (handle);
}

// DDS DAQ_Data::DaqData TypeSupport Object Body

 DAQ_Data::DaqDataTypeSupport::DaqDataTypeSupport(void) :
    TypeSupport_impl(
        __DAQ_Data_DaqData__name(),
        __DAQ_Data_DaqData__keys(),
        DAQ_Data::DaqDataTypeSupport::metaDescriptor,
        (gapi_copyIn) __DAQ_Data_DaqData__copyIn,
        (gapi_copyOut) __DAQ_Data_DaqData__copyOut,
        (gapi_readerCopy) DDS::ccpp_DataReaderCopy<DAQ_Data::DaqDataSeq, DAQ_Data::DaqData>,
        new  DAQ_Data::DaqDataTypeSupportFactory())
{
    // Parent constructor takes care of everything.
}

 DAQ_Data::DaqDataTypeSupport::~DaqDataTypeSupport(void)
{
    // Parent destructor takes care of everything.
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataTypeSupport::register_type(
    DDS::DomainParticipant_ptr domain,
    const char * type_name) THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::register_type(domain, type_name);
}

 char *
DAQ_Data::DaqDataTypeSupport::get_type_name() THROW_ORB_EXCEPTIONS
{
    return TypeSupport_impl::get_type_name();
}

// DDS DAQ_Data::DaqData DataWriter_impl Object Body

 DAQ_Data::DaqDataDataWriter_impl::DaqDataDataWriter_impl (
    gapi_dataWriter handle
) : DDS::DataWriter_impl(handle)
{
    // Parent constructor takes care of everything.
}

 DAQ_Data::DaqDataDataWriter_impl::~DaqDataDataWriter_impl(void)
{
    // Parent destructor takes care of everything.
}

 DDS::InstanceHandle_t
DAQ_Data::DaqDataDataWriter_impl::register_instance(
    const DAQ_Data::DaqData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance(&instance_data);
}

 DDS::InstanceHandle_t 
DAQ_Data::DaqDataDataWriter_impl::register_instance_w_timestamp(
    const DaqData & instance_data,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataWriter_impl::unregister_instance(
    const DAQ_Data::DaqData & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance(&instance_data, handle);
}

 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataWriter_impl::unregister_instance_w_timestamp(
    const DaqData & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataWriter_impl::write(
    const DAQ_Data::DaqData & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write(&instance_data, handle);
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataWriter_impl::write_w_timestamp(
    const DaqData & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataWriter_impl::dispose(
    const DAQ_Data::DaqData & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose(&instance_data, handle);
}

 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataWriter_impl::dispose_w_timestamp(
    const DaqData & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataWriter_impl::writedispose(
    const DAQ_Data::DaqData & instance_data,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose(&instance_data, handle);
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataWriter_impl::writedispose_w_timestamp(
    const DaqData & instance_data,
    DDS::InstanceHandle_t handle,
    const DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataWriter_impl::get_key_value(
    DaqData & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
DAQ_Data::DaqDataDataWriter_impl::lookup_instance(
	const DAQ_Data::DaqData & instance_data) THROW_ORB_EXCEPTIONS
{
    return DataWriter_impl::lookup_instance(&instance_data);
}

// DDS DAQ_Data::DaqData DataReader_impl Object Body

 DAQ_Data::DaqDataDataReader_impl::DaqDataDataReader_impl (
    gapi_dataReader handle
) : DDS::DataReader_impl(handle)
{
    // Parent constructor takes care of everything.
}

 DAQ_Data::DaqDataDataReader_impl::~DaqDataDataReader_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::read(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::take(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::read_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::take_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReader_impl::read_next_sample(
    DAQ_Data::DaqData & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReader_impl::take_next_sample(
    DAQ_Data::DaqData & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::read_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::take_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::read_next_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::take_next_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReader_impl::read_next_instance_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReader_impl::take_next_instance_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReader_impl::return_loan(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReader_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DAQ_Data::DaqDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReader_impl::get_key_value(
    DAQ_Data::DaqData & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
DAQ_Data::DaqDataDataReader_impl::lookup_instance(
    const DAQ_Data::DaqData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReader_impl::lookup_instance(&instance);
}

 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReader_impl::check_preconditions(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples)
{
    DDS::ReturnCode_t status = DDS::RETCODE_PRECONDITION_NOT_MET;
    
    if ( received_data.length() == info_seq.length() &&
         received_data.maximum() == info_seq.maximum() &&
         received_data.release() == info_seq.release() ) {
        if ( received_data.maximum() == 0 || received_data.release() ) {
            if (received_data.maximum() == 0 ||
				max_samples <= static_cast<CORBA::Long>(received_data.maximum()) ||
				max_samples == DDS::LENGTH_UNLIMITED ) {
                status = DDS::RETCODE_OK;
            }
        }
    }
    return status;
}


// DDS DAQ_Data::DaqData DataReaderView_impl Object Body

 DAQ_Data::DaqDataDataReaderView_impl::DaqDataDataReaderView_impl (
    gapi_dataReaderView handle
) : DDS::DataReaderView_impl(handle)
{
    // Parent constructor takes care of everything.
}

 DAQ_Data::DaqDataDataReaderView_impl::~DaqDataDataReaderView_impl(void)
{
    // Parent destructor takes care of everything.
}


 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::read(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::take(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::read_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::take_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReaderView_impl::read_next_sample(
    DAQ_Data::DaqData & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::read_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReaderView_impl::take_next_sample(
    DAQ_Data::DaqData & received_data,
    DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::take_next_sample(&received_data, sample_info);
}


 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::read_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::take_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::read_next_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::take_next_instance(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::SampleStateMask sample_states,
    DDS::ViewStateMask view_states,
    DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReaderView_impl::read_next_instance_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReaderView_impl::take_next_instance_w_condition(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq,
    CORBA::Long max_samples,
    DDS::InstanceHandle_t a_handle,
    DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status;
    
    status = DAQ_Data::DaqDataDataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == DDS::RETCODE_OK ) {
        status = DataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}


 DDS::ReturnCode_t
DAQ_Data::DaqDataDataReaderView_impl::return_loan(
    DAQ_Data::DaqDataSeq & received_data,
    DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    DDS::ReturnCode_t status = DDS::RETCODE_OK;

    if ( received_data.length() > 0 ) {
        if (received_data.length() == info_seq.length() && 
            received_data.release() == info_seq.release() ) {
            if (!received_data.release()) {
                status = DataReaderView_impl::return_loan( received_data.get_buffer(),
                                                       info_seq.get_buffer() );

                if ( status == DDS::RETCODE_OK ) {
                    if ( !received_data.release() ) {
                        DAQ_Data::DaqDataSeq::freebuf( received_data.get_buffer(false) );
                        received_data.replace(0, 0, NULL, false);
                        DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                        info_seq.replace(0, 0, NULL, false);
                    }
                } else if ( status == DDS::RETCODE_NO_DATA ) {
                    if ( received_data.release() ) {
                        status = DDS::RETCODE_OK;
                    } else {
                        status = DDS::RETCODE_PRECONDITION_NOT_MET;
                    }
                }
            }
        } else {
            status = DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }
    return status;
}


 DDS::ReturnCode_t 
DAQ_Data::DaqDataDataReaderView_impl::get_key_value(
    DAQ_Data::DaqData & key_holder,
    DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::get_key_value(&key_holder, handle);
}

 DDS::InstanceHandle_t 
DAQ_Data::DaqDataDataReaderView_impl::lookup_instance(
    const DAQ_Data::DaqData & instance) THROW_ORB_EXCEPTIONS
{
    return DataReaderView_impl::lookup_instance(&instance);
}



const char * ::DAQ_Data::DaqDataTypeSupport::metaDescriptor = "<MetaData version=\"1.0.0\"><Module name=\"DAQ_Data\"><Struct name=\"DaqData\"><Member name=\"dID\"><Long/>"
"</Member><Member name=\"BAT\"><Boolean/></Member><Member name=\"GEN\"><Boolean/></Member><Member name=\"ALT\">"
"<Boolean/></Member><Member name=\"INV\"><Boolean/></Member><Member name=\"HORN\"><Boolean/></Member><Member name=\"ProbeHeat\">"
"<Boolean/></Member><Member name=\"Servo\"><Boolean/></Member><Member name=\"Missiles\"><Boolean/></Member>"
"<Member name=\"Rockets\"><Boolean/></Member><Member name=\"Guns\"><Boolean/></Member><Member name=\"Bombs\">"
"<Boolean/></Member><Member name=\"Auto\"><Boolean/></Member><Member name=\"BLANK\"><Boolean/></Member>"
"<Member name=\"GCSTransf\"><Boolean/></Member><Member name=\"Avionics\"><Boolean/></Member><Member name=\"Stick\">"
"<Double/></Member><Member name=\"Throttle\"><Double/></Member><Member name=\"Pressurization\"><Boolean/>"
"</Member><Member name=\"IFFOVR\"><Boolean/></Member><Member name=\"CB24_MainLPCocx\"><Boolean/></Member>"
"<Member name=\"CB24_HYD_Press\"><Boolean/></Member><Member name=\"CB24_CDU\"><Boolean/></Member><Member name=\"CB24_ASI\">"
"<Boolean/></Member><Member name=\"CB24_HDR\"><Boolean/></Member><Member name=\"CB24_AC_Pitch\"><Boolean/>"
"</Member><Member name=\"CB24_LP_Pump_Port\"><Boolean/></Member><Member name=\"CB24_UC_Ctrl\"><Boolean/>"
"</Member><Member name=\"CB24_MSTR_ARMT\"><Boolean/></Member><Member name=\"CB24_GPS\"><Boolean/></Member>"
"<Member name=\"CB24_WarningLights\"><Boolean/></Member><Member name=\"CB24_ServoCtrl\"><Boolean/></Member>"
"<Member name=\"CB24_LP_Pump_STBD\"><Boolean/></Member><Member name=\"CB24_UC_Pos_Indicator\"><Boolean/>"
"</Member><Member name=\"CB24_SI\"><Boolean/></Member><Member name=\"CB24_Oxy1\"><Boolean/></Member><Member name=\"CB24_Oxy2\">"
"<Boolean/></Member><Member name=\"CB24_EMG_HD_Pump\"><Boolean/></Member><Member name=\"CB24_UHF\"><Boolean/>"
"</Member><Member name=\"CB24_IFF\"><Boolean/></Member><Member name=\"CB24_AH\"><Boolean/></Member><Member name=\"CB24_CAB_T\">"
"<Boolean/></Member><Member name=\"CB24_START\"><Boolean/></Member><Member name=\"CB24_MBM\"><Boolean/>"
"</Member><Member name=\"CDU_Page_L1\"><Boolean/></Member><Member name=\"CDU_Page_L2\"><Boolean/></Member>"
"<Member name=\"CDU_Page_L3\"><Boolean/></Member><Member name=\"CDU_Page_L4\"><Boolean/></Member><Member name=\"CDU_Page_L5\">"
"<Boolean/></Member><Member name=\"CDU_Page_R1\"><Boolean/></Member><Member name=\"CDU_Page_R2\"><Boolean/>"
"</Member><Member name=\"CDU_Page_R3\"><Boolean/></Member><Member name=\"CDU_Page_R4\"><Boolean/></Member>"
"<Member name=\"CDU_Page_R5\"><Boolean/></Member><Member name=\"CDU_Left_TST\"><Boolean/></Member><Member name=\"CDU_Left_PRV\">"
"<Boolean/></Member><Member name=\"CDU_Left_NXT\"><Boolean/></Member><Member name=\"CDU_Left_BRT\"><Boolean/>"
"</Member><Member name=\"CDU_Left_DIM\"><Boolean/></Member><Member name=\"CDU_Numpad_N1\"><Boolean/></Member>"
"<Member name=\"CDU_Numpad_N2\"><Boolean/></Member><Member name=\"CDU_Numpad_N3\"><Boolean/></Member><Member name=\"CDU_Numpad_N4\">"
"<Boolean/></Member><Member name=\"CDU_Numpad_N5\"><Boolean/></Member><Member name=\"CDU_Numpad_N6\"><Boolean/>"
"</Member><Member name=\"CDU_Numpad_N7\"><Boolean/></Member><Member name=\"CDU_Numpad_N8\"><Boolean/></Member>"
"<Member name=\"CDU_Numpad_N9\"><Boolean/></Member><Member name=\"CDU_Numpad_N_Ent\"><Boolean/></Member>"
"<Member name=\"CDU_Numpad_N0\"><Boolean/></Member><Member name=\"CDU_Numpad_N_CLR\"><Boolean/></Member>"
"<Member name=\"CDU_Right_ATK\"><Boolean/></Member><Member name=\"CDU_Right_AA\"><Boolean/></Member><Member name=\"CDU_Right_REC\">"
"<Boolean/></Member><Member name=\"CDU_Right_NAV\"><Boolean/></Member><Member name=\"CDU_Right_DIV\"><Boolean/>"
"</Member><Member name=\"CDU_Right_MEN\"><Boolean/></Member><Member name=\"CDU_Right_OPS\"><Boolean/></Member>"
"<Member name=\"CDU_Right_EMG\"><Boolean/></Member><Member name=\"CDU_Right_GUID\"><Boolean/></Member>"
"<Member name=\"CDU_Right_FUEL\"><Boolean/></Member><Member name=\"CDU_Right_FIX\"><Boolean/></Member>"
"<Member name=\"CDU_Right_N12\"><Boolean/></Member><Member name=\"CDU_Right_ALT\"><Boolean/></Member><Member name=\"CDU_Right_IFF\">"
"<Boolean/></Member><Member name=\"CDU_Right_DCL\"><Boolean/></Member><Member name=\"CDU_Right_N16\"><Boolean/>"
"</Member><Member name=\"UFP_Left_N1\"><Boolean/></Member><Member name=\"UFP_Left_ACK\"><Boolean/></Member>"
"<Member name=\"UFP_Left_MEN\"><Boolean/></Member><Member name=\"UFP_Left_NT\"><Boolean/></Member><Member name=\"UFP_Left_FW\">"
"<Boolean/></Member><Member name=\"UFP_Left_SGL\"><Boolean/></Member><Member name=\"UFP_Left_NAV\"><Boolean/>"
"</Member><Member name=\"UFP_Left_TH\"><Boolean/></Member><Member name=\"UFP_Left_NXT\"><Boolean/></Member>"
"<Member name=\"UFP_Left_N10\"><Boolean/></Member><Member name=\"UFP_Left_CHR\"><Boolean/></Member><Member name=\"UFP_Left_IFF\">"
"<Boolean/></Member><Member name=\"UFP_Numpad_N1\"><Boolean/></Member><Member name=\"UFP_Numpad_N2\"><Boolean/>"
"</Member><Member name=\"UFP_Numpad_N3\"><Boolean/></Member><Member name=\"UFP_Numpad_N4\"><Boolean/></Member>"
"<Member name=\"UFP_Numpad_N5\"><Boolean/></Member><Member name=\"UFP_Numpad_N6\"><Boolean/></Member><Member name=\"UFP_Numpad_N7\">"
"<Boolean/></Member><Member name=\"UFP_Numpad_N8\"><Boolean/></Member><Member name=\"UFP_Numpad_N9\"><Boolean/>"
"</Member><Member name=\"UFP_Numpad_N_Ent\"><Boolean/></Member><Member name=\"UFP_Numpad_N0\"><Boolean/>"
"</Member><Member name=\"UFP_Numpad_N_CLR\"><Boolean/></Member><Member name=\"UFP_Right_DRF_CO\"><Boolean/>"
"</Member><Member name=\"UFP_Right_VEL\"><Boolean/></Member><Member name=\"UFP_Right_DCL\"><Boolean/></Member>"
"<Member name=\"NAU\"><Boolean/></Member><Member name=\"IFFON\"><Boolean/></Member><Member name=\"OverSpeed\">"
"<Boolean/></Member><Member name=\"GauTst\"><Boolean/></Member><Member name=\"IncidTst\"><Boolean/></Member>"
"<Member name=\"CbyF\"><Boolean/></Member><Member name=\"FuelDump\"><Boolean/></Member><Member name=\"UC_Down\">"
"<Boolean/></Member><Member name=\"TankJet\"><Boolean/></Member><Member name=\"WinJet\"><Boolean/></Member>"
"<Member name=\"FuselageJet\"><Boolean/></Member><Member name=\"Prty\"><Boolean/></Member><Member name=\"REC\">"
"<Boolean/></Member><Member name=\"UNK\"><Boolean/></Member><Member name=\"ABrk_Override\"><Boolean/></Member>"
"<Member name=\"MainLP\"><Boolean/></Member><Member name=\"LPPump1\"><Boolean/></Member><Member name=\"LPPump2\">"
"<Boolean/></Member><Member name=\"AB_Left\"><Boolean/></Member><Member name=\"IGN_Ventil\"><Boolean/>"
"</Member><Member name=\"StartIGN\"><Boolean/></Member></Struct></Module></MetaData>";
